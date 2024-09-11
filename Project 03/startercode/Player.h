#ifndef PLAYER_H
#define PLAYER_H

#include "Hand.h"
#include "Deck.h"
#include <string>

using namespace std;

class Player{
 private:
  Hand hand;
  int score;
 public:
  Player() : score(0) {}
  Player(Deck d, int n) : hand(d, n), score(0) {}
  string printHand(){ return hand.printHand(); };
  Card playCard( int c ){return hand.playCard(c);};
  int handSize(){ return hand.getHandSize(); };
  void updateScore( int val ){score += val;};
  int getScore(){ return score; };
};

#endif
