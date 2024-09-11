#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
private:
    std::string name;

public:
    Shape();
    Shape(std::string n) : name(n) {};
    virtual std::string printName() final { return name; };
    virtual double getArea() const = 0;
};

#endif
