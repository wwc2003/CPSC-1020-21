#ifndef SQUARE_H
#define SQUARE_H

using namespace std;

class Square{
private:
  double side;
public:
  // add member initialization to each constructor
  Square() : side(1.0){}
  Square( double s ) : side(s){}
  
  double getSide();
  bool setSide( double s );
  double getArea();
};

#endif

