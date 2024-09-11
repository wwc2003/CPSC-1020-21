#include "Square.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  std::string type;
  cin >> type;

  if( type == "int" ){
    int s;
    cin >> s;
    Square<int> sq( s );
    fprintf( stdout , "The square with a side of % 2d has an area of % 4d.\n" , s , sq.getArea() ); 
  }
  else{
    double s;
    cin >> s;
    Square<double> sq( s );
    fprintf( stdout , "The square with a side of % 5.2f has an area of % 5.2f.\n" , s , sq.getArea() );
  }

  return 0;
}
