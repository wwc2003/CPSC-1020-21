#ifndef CAR_H
#define CAR_H
#include "Car.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string.h>

using namespace std;

class Car
{
private:
  string plate;
  string model;
  string make;
  int year;
public:
  Car();
  string getMake();
  string getModel();
  int getYear();
  string getPlate();
  void setMake( string m1);
  void setModel( string m2);
  void setYear(int y);
  void setPlate(string p);
  string printVehicle();

};

#endif
