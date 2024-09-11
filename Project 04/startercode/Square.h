#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

template <class T>
class Square : public Shape<T> {
private:
    T side;

public:
    Square();
    Square(T s);

    virtual T getArea() override;
};

extern template class Square<int>;
extern template class Square<double>;

#endif
