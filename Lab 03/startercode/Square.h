#ifndef SQUARE_H
#define SQUARE_H

using namespace std;

class Square{
private:
  double side;
public:
  Square();
  Square( double s );
  double getSide();
  bool setSide( double s );
  double getArea();
};

#endif

