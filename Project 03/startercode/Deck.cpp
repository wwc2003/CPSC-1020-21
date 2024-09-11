#include "Deck.h"
#include "Card.h"
#include <algorithm>
#include <ctime>

Deck::Deck() {
    for (int i = 1; i <= 20; i++) {
        if (i <= 10) {
            Card c(i, Color::purple);
            deck.push_back(c);
        } else {
            Card c(i - 10, Color::orange);
            deck.push_back(c);
        }
    }
}

void Deck::shuffle() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::random_shuffle(deck.begin(), deck.end());
}

Card Deck::drawCard() {
    if (deck.empty()) {
        return Card(0, Color::purple);
    }
    Card c = deck.front();

    deck.erase(deck.begin());
    return c;
}

int Deck::getDeckSize() {
    return deck.size();
}
