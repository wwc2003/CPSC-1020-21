#include "Hand.h"
#include "Card.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Deck d;
  int n;
  cin >> n;
  Player p( d , n );
  cout << p.printHand() << endl;
  Card c = p.playCard( n );
  cout << c.printCard() << endl;
  cout << p.printHand() << endl;
  return 0;
}
