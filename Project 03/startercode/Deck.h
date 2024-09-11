#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>

using namespace std;

class Deck{
 private:
  vector<Card> deck;
 public:
  Deck();
  void shuffle();
  Card drawCard();
  int getDeckSize();
};

#endif
