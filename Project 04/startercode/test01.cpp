#include "Circle.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  std::string type;
  cin >> type;

  if( type == "int" ){
    int r;
    cin >> r;
    Circle<int> c( r );
    fprintf( stdout , "The circle with a radius of % 2d has an area of % 4d.\n" , r , c.getArea() ); 
  }
  else{
    double r;
    cin >> r;
    Circle<double> c( r );
    fprintf( stdout , "The circle with a radius of % 5.2f has an area of % 5.2f.\n" , r , c.getArea() );
  }
  
  return 0;
}
