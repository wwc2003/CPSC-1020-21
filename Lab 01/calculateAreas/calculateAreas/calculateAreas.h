#ifndef CALCULATEAREAS_H
#define CALCULATEAREAS_H

#include <string>
#include <math.h>

using namespace std;

void runProgram();
void printResult(string shape, double area);
void calculateAreas();

double calculateSquare(double side);

double calculateCircle(double radius);
double calculateRightTriangle(double base, double height);

#endif

#pragma once
