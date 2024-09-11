#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <string>

class Circle : public Shape {
private:
    static const double PI;
    double radius;

public:
    Circle();
    Circle(double r) : Shape("Circle"), radius(r) {};
    virtual double getArea() const override;
};

#endif
