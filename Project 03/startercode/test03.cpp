#include "Hand.h"
#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Deck d;
  int n;
  cin >> n;
  Hand h( d , n );
  cout << h.printHand() << endl;
  Card c = h.playCard(n);
  cout << c.printCard() << endl;
  cout << h.printHand() << endl;
  return 0;
}
