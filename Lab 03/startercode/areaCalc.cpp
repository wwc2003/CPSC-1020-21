#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;

int main( int argc , char* argv[] )
{
  int user_input;

do
{
cout << "Enter a shape to calculate the area of (1: square, 2: circle, 3: rectangle, 4: trapezoid, 5: quit): ";
cin >> user_input;

  switch(user_input)
  {

    case(2):
    {
    double radius;
    Circle myCircle(radius);

    do{
    cout << "Enter a valid radius: ";
    cin >> radius;
    }
    while(!myCircle.setRadius(radius));
    printf("The area of the circle is %.2f\n", myCircle.getArea());
    break;
    }


    case(1):
    {
      double side;
      Square mySquare(side);

      do
      {
      cout << "Enter a valid side: ";
      cin >> side; 
      }while(!mySquare.setSide(side));
      printf("The area of the square is %.2f\n", mySquare.getArea());
      break;
    }

    case(3):
    {
      double width, height;
      Rectangle myRectangle(width, height);

      do{
      cout << "Enter a valid width: ";
      cin >> width;
      }while(!myRectangle.setWidth(width));

      do
      {
      cout << "Enter a valid height: ";
      cin >> height;
      }while(!myRectangle.setHeight(height));

      printf("The area of the rectangle is %.2f\n",myRectangle.getArea());
      break;
    }

    case(4):
      {
      double b1, b2, h;
      Trapezoid myTrapezoid(b1, b2, h);

      do
      {
      cout << "Enter a valid base 1: ";
      cin >> b1;
      }while(!myTrapezoid.setBase1(b1));

      do
      {
      cout << "Enter a valid base 2: ";
      cin >> b2;
      }while(!myTrapezoid.setBase2(b2));

      do
      {
      cout << "Enter a valid height: ";
      cin >> h;
      }while(!myTrapezoid.setHeight(h));

       printf("The area of the trapezoid is %.2f\n",myTrapezoid.getArea());

      break;
      }
  }
}
while(user_input != 5);
  return 0;
}
