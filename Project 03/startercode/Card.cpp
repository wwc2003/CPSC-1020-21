#include "Card.h"
#include <string>
#include <sstream>

Card::Card(int r, Color c) {
    rank = r;
    color = c;
}

std::string Card::printCard() {
    std::string colorStr;

    switch (color) {
        case Color::orange:
            colorStr = "orange";
            break;
        case Color::purple:
            colorStr = "purple";
            break;
    }

    std::stringstream ss;
    ss << colorStr << ":" << rank;
    return ss.str();
}

int Card::getRank() {
    return rank;
}

Color Card::getColor() {
    return color;
}

unsigned int Card::getValue() {
    if (color == Color::purple) {
        return static_cast<unsigned int>(rank);
    } else if (color == Color::orange) {
        return static_cast<unsigned int>(rank * 2);
    }
    return 0;
}
