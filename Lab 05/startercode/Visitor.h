#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

class Visitor
{
private:
  string company;
  string title;

public:
  Visitor();
  string getCompany();
  string getTitle();
  void setCompany(string c);
  void setTitle(string t);
};

#endif
