#ifndef SHAPE_H
#define SHAPE_H

#include <string>

template <class T>
class Shape{
private:
  std::string name;
public:
  Shape();
  Shape( std::string n ){ name = n; };
  virtual std::string printName() final { return name; };
  virtual T getArea() = 0;
};

#endif

