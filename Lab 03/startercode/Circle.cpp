#include "Circle.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

Circle::Circle()
{
  radius = -1;
}

Circle::Circle( double r )
{
if(r >= 0)
radius = r;
}

double Circle::getRadius()
{
  return radius;
}

bool Circle::setRadius( double r )
{
  if(r >= 0.0)
  {
  radius = r;
  return true;
  }
  else
  {
  return false;
  }
}

double Circle::getArea()
{
  return pow(radius, 2) * M_PI;
}
