#include "Rectangle.h"

template <class T>
Rectangle<T>::Rectangle() : Shape<T>("Rectangle"), length(T()), width(T()) {}

template <class T>
Rectangle<T>::Rectangle(T l, T w) : Shape<T>("Rectangle"), length(l), width(w) {}

template <class T>
T Rectangle<T>::getArea() {
  return length * width;
}

template class Rectangle<int>;
template class Rectangle<double>;
