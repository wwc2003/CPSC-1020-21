#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle{
private:
  double height;
  double width;
public:
  Rectangle();
  Rectangle( double w , double h );
  double getHeight();
  bool setHeight( double h );
  double getWidth();
  bool setWidth( double w );
  double getArea();
};

#endif

