#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

int main( int argc , char **argv )
{
   Deck deck;
   deck.shuffle();
    Player player(deck, 5);
     deck.shuffle();
    Player computer(deck, 5);

    for (int round = 1; round <= 5; ++round) {
        std::cout << "Round " << round << "\n-------\n";
        Card computerCard = computer.playCard(1);
        std::cout << "The computer has played " << computerCard.printCard() << "\n";

        std::cout << "Your hand: " << player.printHand() << "\n";
        int chosenCardIndex;
        std::cout << "Which card would you like to play? (1-" << player.handSize() << "): ";
        std::cin >> chosenCardIndex;

        Card playerCard = player.playCard(chosenCardIndex);

        if (playerCard.getValue() > computerCard.getValue()) {
            std::cout << "You win Round " << round << "\n";
            player.updateScore(playerCard.getValue() + computerCard.getValue());
        } else {
            std::cout << "The computer wins Round " << round << "\n";
            computer.updateScore(playerCard.getValue() + computerCard.getValue());
        }

        std::cout << "The current score is You (" << player.getScore() << ") Computer (" << computer.getScore() << ")\n";
    }
    if (player.getScore() > computer.getScore()) {
        std::cout << "You won the game!\n";
    } else if (player.getScore() < computer.getScore()) {
        std::cout << "The computer won the game!\n";
    } else {
        std::cout << "It's a tie!\n";
    }

    return 0;
}
