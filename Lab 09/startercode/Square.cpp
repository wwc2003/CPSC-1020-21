#include "Square.h"

template <class T>
Square<T>::Square() : Shape<T>("Square"), side(T()) {}

template <class T>
Square<T>::Square(T s) : Shape<T>("Square"), side(s) {}

template <class T>
T Square<T>::getArea() {
    return side * side;
}

template class Square<int>;
template class Square<double>;
