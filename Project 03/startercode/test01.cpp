#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  string color;
  int rank;

  cin >> color >> rank;
  if( color == "purple" ){
    Card c( rank , Color::purple );
    cout << c.printCard() << endl;
  }
  else{
    Card c( rank , Color::orange );
    cout << c.printCard() << endl;
  }
  
  return 0;
}
