#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;

class Circle{
private:
  double radius;
public:
  // add member initialization to each constructor
  Circle() : radius(1.0){}
  Circle( double r ) : radius(r){}
  
  double getRadius();
  bool setRadius( double r );
  double getArea();
};

#endif

