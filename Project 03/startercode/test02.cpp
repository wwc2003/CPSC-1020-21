#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  Deck d;
  d.shuffle();
  for( int i = 0; i < 20; i++ ){
    Card c = d.drawCard();
    cout << c.printCard() << endl;
  }
  return 0;
}
