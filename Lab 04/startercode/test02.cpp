#include "Square.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Square sq( 5 );

  fprintf( stdout , "The square with side %.2f has area %.2f.\n" , sq.getSide() , sq.getArea() );
  return 0;
}
