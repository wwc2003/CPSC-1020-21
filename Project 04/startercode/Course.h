#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <string>

class Course {
private:
    int id;                     // Unique identifier for the course
    std::string name;           // Name of the course
    std::vector<int> ratings;   // Store ratings for the course

public:
    // Default constructor
    Course() { id = -1; name = ""; };

    // Parameterized constructor
    Course(int i, std::string n) { id = i; name = n; };

    // Copy constructor
    Course(const Course &c) { id = c.getID(), name = c.getName(); };

    // Getter method for retrieving the course ID
    int getID() const { return id; };

    // Getter method for retrieving the course name
    std::string getName() const { return name; };

    // TODO: Add methods for managing ratings (e.g., addRating, getAverageRating)

};

#endif
