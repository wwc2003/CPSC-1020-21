#include "Circle.h"

template <class T>
Circle<T>::Circle() : Shape<T>("Circle"), radius(T()) {}

template <class T>
Circle<T>::Circle(T r) : Shape<T>("Circle"), radius(r) {}

template <class T>
T Circle<T>::getArea() {
    return PI * radius * radius;
}

template class Circle<int>;
template class Circle<double>;
