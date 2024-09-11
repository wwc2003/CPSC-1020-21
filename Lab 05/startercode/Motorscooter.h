#ifndef MOTORSCOOTER_H
#define MOTORSCOOTER_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

class Motorscooter
{
private:
  string plate;
  string model;
  string make;
  int year;

public:
  Motorscooter();
  string getMake();
  string getModel();
  int getYear();
  string getPlate();
  void setMake(string m1);
  void setModel(string m2);
  void setYear(int y);
  void setPlate(string p);
  string printVehicle();
};

#endif
