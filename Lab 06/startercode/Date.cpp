#include "Date.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

Date::Date() : day(1), month(1), year(1900) {}
Date::Date(int m, int d, int y) : day(d), month(m), year(y) {}

void Date::setDay(int d) {
    day = d;
}

void Date::setMonth(int m) {
    month = m;
}

void Date::setYear(int y) {
    year = y;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

string Date::print() const {
    std::stringstream ss;
    ss << std::left << std::setw(10) << MONTHS[month - 1] << " " << std::right << std::setw(3) << day << ", " << std::setw(5) << year;
    return ss.str();
}

bool Date::compare(const Date& date1, const Date& date2) {
    if (date1.year < date2.year) {
        return true;
    } else if (date1.year > date2.year) {
        return false;
    } else {
        if (date1.month < date2.month) {
            return true;
        } else if (date1.month > date2.month) {
            return false;
        } else {
            return date1.day < date2.day;
        }
    }
}
