#ifndef CARD_H
#define CARD_H

#include <string>

using namespace std;

enum class Color { purple , orange };

class Card{
 private:
  unsigned int rank;
  Color color;
  unsigned int value;
 public:
  Card():rank(0),color(Color::purple){};
  Card( int rnk , Color clr );
  string printCard();
  int getRank();
  Color getColor();
  unsigned int getValue();
};

#endif
