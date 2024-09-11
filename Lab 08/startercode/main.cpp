#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <memory>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"

using namespace std;

int main( int argc , char* argv[] ){
  vector<shared_ptr<Shape>> shapeVect;

  while( true ){
    string shape;
    cin >> shape;

    if( cin.eof() ){
      break;
    }
    
    if( shape == "Square" ){
      int s;
      cin >> s;
      shapeVect.push_back( make_shared<Square>( s ) );
    }
    else if( shape == "Circle" ){
      int r;
      cin >> r;
      shapeVect.push_back( make_shared<Circle>( r ) );
    }
    else if( shape == "Rectangle" ){
      int l, w;
      cin >> l >> w;
      shapeVect.push_back( make_shared<Rectangle>( l , w ) );
    }
    else if( shape == "Trapezoid" ){
      int b1 , b2 , h;
      cin >> b1 >> b2 >> h;
      shapeVect.push_back( make_shared<Trapezoid>( b1 , b2 , h ) );
    }
  }
  for (const auto& shape : shapeVect) {
        cout << "The " << shape->printName() << " has an area of " << shape->getArea() << "." << endl;
    }
  

  return 0;
}
