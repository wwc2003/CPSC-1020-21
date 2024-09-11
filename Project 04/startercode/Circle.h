#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

template <class T>
class Circle : public Shape<T> {
private:
    T radius;
    const double PI = 3.14;

public:
    Circle();
    Circle(T r);

    virtual T getArea() override;
};

extern template class Circle<int>;
extern template class Circle<double>;

#endif
