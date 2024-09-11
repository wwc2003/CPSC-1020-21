#ifndef TRAPEZOID_H
#define TRAPEZOID_H

using namespace std;

class Trapezoid{
private:
  double base1;
  double base2;
  double height;
public:
  
  // add member initialization to each constructor
  Trapezoid() : base1(1.0), base2(1.0), height(1.0){}
  Trapezoid( double b1 , double b2 , double h ) : base1(b1), base2(b2), height(h){}

  double getHeight();
  bool setHeight( double h );
  double getBase1();
  bool setBase1( double b1 );
  double getBase2();
  bool setBase2( double b2 );
  double getArea();
};

#endif

