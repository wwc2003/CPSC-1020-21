#include "calcDays.h"
#include "Date.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int calcDays( const Date &a , const Date &b )
{
   const int daysInYear = 365;
const int baseYear = 2021;
const int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int totalDaysA = 0;
int totalDaysB = 0;
for (int year = baseYear; year < a.getYear(); ++year) {
totalDaysA = totalDaysA + daysInYear;
}
for (int year = baseYear; year < b.getYear(); ++year) {
totalDaysB = totalDaysB + daysInYear;
}
for (int month = 1; month < a.getMonth(); ++month) {
totalDaysA = totalDaysA + daysPerMonth[month - 1];
}
for (int month = 1; month < b.getMonth(); ++month) {
totalDaysB = totalDaysB + daysPerMonth[month - 1];
}
totalDaysA = totalDaysA + a.getDay();
totalDaysB = totalDaysB + b.getDay();
int daysDifference = totalDaysB - totalDaysA;
return daysDifference;
}
