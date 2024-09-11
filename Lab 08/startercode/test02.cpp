#include "Square.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Square s( 2 );

  fprintf( stdout , "The square has area %.2f.\n" , s.getArea() );
  return 0;
}
