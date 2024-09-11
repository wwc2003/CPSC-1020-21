#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

template <class T>
class Rectangle : public Shape<T> {
private:
  T length;
  T width;

public:
  Rectangle();
  Rectangle(T l, T w);

  virtual T getArea() override;
};

extern template class Rectangle<int>;
extern template class Rectangle<double>;

#endif
