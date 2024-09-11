#include "Car.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string.h>

using namespace std;

Car::Car(){
}

string Car::getMake(){
  return make;
}
string Car::getModel(){
  return model;
}
string Car::getPlate(){
  return plate;
}
int Car::getYear(){
  return  year;
}
void Car::setMake(string m1)
{
make = m1;
}
void Car::setModel(string m2){
model = m2;
}
void Car::setPlate(string p){
plate = p;
}
void Car::setYear(int y){
year = y;
}

string Car::printVehicle(){
return "Car Details: " + to_string(year) + " " + make + " " + model + " " + plate;
}