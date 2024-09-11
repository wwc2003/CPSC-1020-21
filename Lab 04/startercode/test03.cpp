#include "Rectangle.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Rectangle r( 3 , 2 );

  fprintf( stdout , "The rectangle with width %.2f and height %.2f has area %.2f.\n" , r.getWidth() , r.getHeight() , r.getArea() );
  return 0;
}
