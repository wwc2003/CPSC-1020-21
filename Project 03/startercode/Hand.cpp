#include "Hand.h"
#include <string>
#include <sstream>

Hand::Hand() {
}

Hand::Hand(Deck d, int n) {
    for (int i = 0; i < n; i++) {
        hand.push_back(d.drawCard());
    }
}

string Hand::printHand() {
    stringstream handString;
    for (unsigned i = 0; i < hand.size(); i++) {
        handString << "[" << i + 1 << "] " << hand[i].printCard();
        if (i != hand.size() - 1) {
            handString << " ";
        }
    }

    return handString.str();
}

Card Hand::playCard(int c) {
    if (c >= 1 && (unsigned)c <= hand.size()) {
        Card card = hand[c - 1];
        hand.erase(hand.begin() + c - 1);
        return card;
    } else {
        return Card(0, Color::purple);
    }
}

int Hand::getHandSize() {
    return hand.size();
}
