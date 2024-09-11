#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <string>

class Square: public Shape{
private:
  double side;
public:
  Square();
  Square( double s ):Shape("Square"),side(s){};
  virtual double getArea() const override;
};

#endif

