#include "Square.h"

Square::Square() : Shape("Square"), side(0.0) {}

double Square::getArea() const{
    return side * side;
}