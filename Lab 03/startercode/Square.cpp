#include "Square.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

Square::Square()
{
  side = -1;
}

Square::Square( double s )
{
 side = s;
}


double Square::getSide(){
  return side;
}

bool Square::setSide( double s ){
  if(s >= 0)
  {
  side = s;
  return true;
  }
  else
  return false;
}

double Square::getArea(){
  return side * side;
}
