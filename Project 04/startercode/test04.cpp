#include "Trapezoid.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  std::string type;
  cin >> type;

  if( type == "int" ){
    int b1,b2,h;
    cin >> b1 >> b2 >> h;
    Trapezoid<int> tr( b1 , b2 , h );
    fprintf( stdout , "The trapezoid with base1 of % 2d, base2 of %2d, and height of % 2d has an area of % 4d.\n" , b1 , b2 , h , tr.getArea() ); 
  }
  else{
    double b1,b2,h;
    cin >> b1 >> b2 >> h;
    Trapezoid<double> tr( b1 , b2 , h );
    fprintf( stdout , "The trapezoid with a base1 of % 5.2f, base2 of % 5.2f, and height of % 5.2f has an area of % 5.2f.\n" , b1 , b2 , h , tr.getArea() );
  }

  return 0;
}
