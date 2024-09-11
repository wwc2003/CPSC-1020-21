#include "Motorscooter.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

Motorscooter::Motorscooter() {
}

string Motorscooter::getMake() {
    return make;
}

string Motorscooter::getModel() {
    return model;
}

string Motorscooter::getPlate() {
    return plate;
}

int Motorscooter::getYear() {
    return year;
}

void Motorscooter::setMake(string m1) {
    make = m1;
}

void Motorscooter::setModel(string m2) {
    model = m2;
}

void Motorscooter::setPlate(string p) {
    plate = p;
}

void Motorscooter::setYear(int y) {
    year = y;
}

string Motorscooter::printVehicle() {
    return "Motorscooter Details: " + to_string(year) + " " + make + " " + model + " " + plate;
}
