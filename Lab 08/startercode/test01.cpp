#include "Circle.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Circle c( 2 );

  fprintf( stdout , "The circle has area %.2f.\n" , c.getArea() );
  return 0;
}
