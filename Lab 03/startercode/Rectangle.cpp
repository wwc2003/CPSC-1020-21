#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

Rectangle::Rectangle()
{
  width = -1;
  height = -1;
}

Rectangle::Rectangle( double w , double h )
{
  height = h;
  width = w;
}

double Rectangle::getHeight(){
  return height;
}

bool Rectangle::setHeight( double h )
{
  if(h >= 0)
  {
  height = h;
  return true;
  }
  else
  return false;
}

double Rectangle::getWidth(){
  return width;
}

bool Rectangle::setWidth( double w )
{
   if(w >= 0)
  {
  width = w;
  return true;
  }
  else
  return false;
  }


double Rectangle::getArea(){
  return width * height;
}
