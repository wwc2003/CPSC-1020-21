#ifndef TRAPEZOID_H
#define TRAPEZOID_H

using namespace std;

class Trapezoid{
private:
  double base1;
  double base2;
  double height;
public:
  Trapezoid();
  Trapezoid( double b1 , double b2 , double h );
  double getHeight();
  bool setHeight( double h );
  double getBase1();
  bool setBase1( double b1 );
  double getBase2();
  bool setBase2( double b2 );
  double getArea();
};

#endif

