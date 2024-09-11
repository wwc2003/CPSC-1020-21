#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

class Employee
{
private:
  string company;
  string title;

public:
  Employee();
  string getCompany();
  string getTitle();
  void setCompany(string c);
  void setTitle(string t);
};

#endif
