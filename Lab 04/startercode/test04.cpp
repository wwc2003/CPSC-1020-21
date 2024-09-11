#include "Trapezoid.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Trapezoid t( 2 , 3 , 1 );

  fprintf( stdout , "The trapezoid with base1 %.2f, base2 %.2f and height %.2f has area %.2f.\n" , t.getBase1() , t.getBase2() , t.getHeight() , t.getArea() );
  return 0;
}
