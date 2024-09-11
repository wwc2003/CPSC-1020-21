#include "Trapezoid.h"

template <class T>
Trapezoid<T>::Trapezoid() : Shape<T>("Trapezoid"), base1(T()), base2(T()), height(T()) {}

template <class T>
Trapezoid<T>::Trapezoid(T b1, T b2, T h) : Shape<T>("Trapezoid"), base1(b1), base2(b2), height(h) {}

template <class T>
T Trapezoid<T>::getArea() {
  return (base1 + base2) * height / 2;
}

template class Trapezoid<int>;
template class Trapezoid<double>;
