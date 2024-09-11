#include "Rectangle.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Rectangle r( 2 , 3 );

  fprintf( stdout , "The rectangle has area %.2f.\n" , r.getArea() );
  return 0;
}
