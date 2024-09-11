#include "Trapezoid.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

Trapezoid::Trapezoid()
{
  base1 = -1;
  base2 = -1;
  height = -1;
}

Trapezoid::Trapezoid( double b1 , double b2 , double h )
{
  base1 = b1;
  base2 = b2;
  height = h;
}

double Trapezoid::getHeight(){
  return height;
}

bool Trapezoid::setHeight( double h )
{
  if(h >= 0)
  {
  height = h;
  return true;
  }
  else
  return false;
}

double Trapezoid::getBase1(){
  return base1;
}

bool Trapezoid::setBase1( double b1 )
{
  if(b1 >= 0)
  {
  base1 = b1;
  return true;
  }
  else
  return false;
}

double Trapezoid::getBase2(){
return base2;
}

bool Trapezoid::setBase2( double b2 ){
  if(b2 >= 0)
  {
  base2 = b2;
  return true;
  }
  else
  return false;
}

double Trapezoid::getArea(){
  return ((base2 + base1)/2)*height;
}
