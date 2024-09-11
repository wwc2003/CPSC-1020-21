#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {};
    virtual double getArea() const override;
};

#endif
