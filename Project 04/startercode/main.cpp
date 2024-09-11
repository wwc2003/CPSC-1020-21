#include "Course.h"
#include "Rating.h"
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>

using namespace std;

vector<Course> readCoursesFile( string filename ){
  ifstream file( filename.c_str() );
  vector<Course> courses;
  while( true ){
    if( file.eof() ){
      break;
    }

    char line[80];
    file.getline( line , 80 );
    string fullLine( line );
    stringstream s( fullLine );
    string prefix;
    s >> prefix;
    int num;
    s >> num;
    if( s.eof() ){
      break;
    }
    Course c( num , fullLine );
    courses.push_back( c );
  }
  return courses;
}

vector<Rating> readRatingsFile( string filename ){
  ifstream file( filename.c_str() );
  vector<Rating> ratings;
  int student = 0;
  while( true ){
    if( file.eof() ){
      break;
    }

    char line[80];
    file.getline( line , 80 );
    string fullLine( line );
    stringstream s( fullLine );
    while( !s.eof() ){
      int course;
      int rating;
      s >> course >> rating;
      if( s.eof() ){
	break;
      }
      Rating r( student , course , rating );
      ratings.push_back( r );
    }
    student++;
  }
  return ratings;
}

double similarity(const Course &c1, const Course &c2, const vector<Rating> &ratings) {
    // Find the set of students who have rated both courses
    vector<int> commonStudents;
    for (const Rating &rating : ratings) {
        if (rating.getCourse() == c1.getID() || rating.getCourse() == c2.getID()) {
            commonStudents.push_back(rating.getStudent());
        }
    }

    // Calculate the average rating for each course
    double avgRatingC1 = 0.0, avgRatingC2 = 0.0;
    int numCommonStudents = commonStudents.size();
    for (int student : commonStudents) {
        for (const Rating &rating : ratings) {
            if (rating.getStudent() == student) {
                if (rating.getCourse() == c1.getID()) {
                    avgRatingC1 += rating.getRating();
                } else if (rating.getCourse() == c2.getID()) {
                    avgRatingC2 += rating.getRating();
                }
            }
        }
    }
    avgRatingC1 /= numCommonStudents;
    avgRatingC2 /= numCommonStudents;

    // Calculate the numerator and denominators for Adjusted Cosine Similarity
    double numerator = 0.0, denomC1 = 0.0, denomC2 = 0.0;
    for (int student : commonStudents) {
        double ratingC1 = 0.0, ratingC2 = 0.0;
        for (const Rating &rating : ratings) {
            if (rating.getStudent() == student) {
                if (rating.getCourse() == c1.getID()) {
                    ratingC1 = rating.getRating();
                } else if (rating.getCourse() == c2.getID()) {
                    ratingC2 = rating.getRating();
                }
            }
        }
        // Update the values for the numerator and denominators
        numerator += (ratingC1 - avgRatingC1) * (ratingC2 - avgRatingC2);
        denomC1 += pow((ratingC1 - avgRatingC1), 2);
        denomC2 += pow((ratingC2 - avgRatingC2), 2);
    }

    // Calculate the Adjusted Cosine Similarity
    double similarityScore = 0.0;
    if (denomC1 != 0.0 && denomC2 != 0.0) {
        similarityScore = numerator / (sqrt(denomC1) * sqrt(denomC2));
    }

    return similarityScore;
}











int main( int argc , char **argv ){

  string courseFilename = string( argv[1] );
  string ratingFilename = string( argv[2] );

  vector<Course> course = readCoursesFile( courseFilename );
  vector<Rating> rating = readRatingsFile( ratingFilename );
  
  int numA, numB;
  cin >> numA >> numB;
  Course courseA, courseB;

  for( int i = 0; i < course.size(); i++ ){
    if( course[i].getID() == numA ){
      courseA = course[i];
    }
    if( course[i].getID() == numB ){
      courseB = course[i];
    }
  }
  

  fprintf(stdout, "CPSC %d and CPSC %d have a similarity score of %+05.4f\n", numA, numB, similarity(courseA, courseB, rating));

  return 0;
}
