#include "Motorcycle.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

Motorcycle::Motorcycle() {
}

string Motorcycle::getMake() {
    return make;
}

string Motorcycle::getModel() {
    return model;
}

string Motorcycle::getPlate() {
    return plate;
}

int Motorcycle::getYear() {
    return year;
}

void Motorcycle::setMake(string m1) {
    make = m1;
}

void Motorcycle::setModel(string m2) {
    model = m2;
}

void Motorcycle::setPlate(string p) {
    plate = p;
}

void Motorcycle::setYear(int y) {
    year = y;
}

string Motorcycle::printVehicle() {
    return "Motorcycle Details: " + to_string(year) + " " + make + " " + model + " " + plate;
}
