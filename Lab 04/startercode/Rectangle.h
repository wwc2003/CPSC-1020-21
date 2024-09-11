#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle{
private:
  double height;
  double width;
public:
  // add member initialization to each constructor
  Rectangle() : width(1.0), height(1.0){}
  Rectangle( double w , double h ) : width(w), height(h){}
  
  double getHeight();
  bool setHeight( double h );
  double getWidth();
  bool setWidth( double w );
  double getArea();
};

#endif

