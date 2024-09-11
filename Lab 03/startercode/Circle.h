#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES

using namespace std;

class Circle{
private:
  double radius;
public:
  Circle();
  Circle( double r );
  double getRadius();
  bool setRadius( double r );
  double getArea();
};

#endif

