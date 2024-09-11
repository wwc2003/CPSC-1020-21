#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

class Student
{
private:
  string major;
  string year;

public:
  Student();
  string getMajor();
  string getYear();
  void setMajor(string m);
  void setYear(string y);
};

#endif
