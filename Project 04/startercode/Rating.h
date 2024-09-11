#ifndef RATING_H
#define RATING_H

#include <vector>

class Rating {
private:
    int studentID;  // Identifier for the student who gave the rating
    int courseID;   // Identifier for the course being rated
    int score;      // The rating score given by the student

public:
    // Parameterized constructor to initialize the Rating object
    Rating(int s, int c, int r) { studentID = s; courseID = c; score = r; };

    // Getter method to retrieve the student ID associated with the rating
    int getStudent() const { return studentID; };

    // Getter method to retrieve the course ID associated with the rating
    int getCourse() const { return courseID; };

    // Getter method to retrieve the rating score
    int getRating() const { return score; };
};

#endif
