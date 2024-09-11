#include "Circle.h"
#include <cmath>

const double Circle::PI = 3.14;

double Circle::getArea() const {
    return PI * radius * radius;
}
