#include "Trapezoid.h"

Trapezoid::Trapezoid() : Shape("Trapezoid"), base1(0.0), base2(0.0), height(0.0) {}

double Trapezoid::getArea() const{
    return 0.5 * (base1 + base2) * height;
}
