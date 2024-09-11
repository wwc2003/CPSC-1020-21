#include "Date.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <vector>

int main() {
    int user_input;
    std::cin >> user_input;

    std::vector<Date> dates;

    for (int i = 0; i < user_input; i++) {
        int month, day, year;
        std::cin >> month >> day >> year;
        Date date(month, day, year);
        dates.push_back(date);
    }
    std::sort(dates.begin(), dates.end(), Date::compare);

    for (const Date& date : dates) {
        std::cout << date.print() << std::endl;
    }

    return 0;
}
