#ifndef HAND_H
#define HAND_H

#include "Card.h"
#include "Deck.h"
#include <string>
#include <vector>

using namespace std;

class Hand{
 private:
  vector<Card> hand;
 public:
  Hand();
  Hand( Deck d , int n );
  string printHand();
  Card playCard( int c );
  int getHandSize();
};

#endif
