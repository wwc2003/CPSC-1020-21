#include "Circle.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Circle c( 3.0 );

  fprintf( stdout , "The circle with radius %.2f has area %.2f.\n" , c.getRadius() , c.getArea() );
  return 0;
}
