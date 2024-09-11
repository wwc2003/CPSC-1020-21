#ifndef VENDOR_H
#define VENDOR_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

class Vendor
{
private:
  string company;
  string title;

public:
  Vendor();
  string getCompany();
  string getTitle();
  void setCompany(string c);
  void setTitle(string t);
};

#endif
