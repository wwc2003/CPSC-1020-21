#include "Trapezoid.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Trapezoid t( 2 , 3 , 4 );

  fprintf( stdout , "The trapezoid has area %.2f.\n" , t.getArea() );
  return 0;
}
