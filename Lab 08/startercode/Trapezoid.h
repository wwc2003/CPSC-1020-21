#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Shape.h"
#include <string>

class Trapezoid : public Shape {
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid();
    
    Trapezoid(double b1, double b2, double h) : Shape("Trapezoid"), base1(b1), base2(b2), height(h) {};

    virtual double getArea() const override;
};

#endif
