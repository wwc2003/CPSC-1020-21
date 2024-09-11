#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Shape.h"

template <class T>
class Trapezoid : public Shape<T> {
private:
  T base1;
  T base2;
  T height;

public:
  Trapezoid();
  Trapezoid(T b1, T b2, T h);

  virtual T getArea() override;
};

extern template class Trapezoid<int>;
extern template class Trapezoid<double>;

#endif
