#include "Rectangle.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  std::string type;
  cin >> type;

  if( type == "int" ){
    int l,w;
    cin >> l >> w;
    Rectangle<int> re( l , w );
    fprintf( stdout , "The rectangle with a length of % 2d and width of % 2d has an area of % 4d.\n" , l , w , re.getArea() ); 
  }
  else{
    double l,w;
    cin >> l >> w;
    Rectangle<double> re( l , w );
    fprintf( stdout , "The rectangle with a length of % 5.2f and width of % 5.2f has an area of % 5.2f.\n" , l , w , re.getArea() );
  }

  return 0;
}
