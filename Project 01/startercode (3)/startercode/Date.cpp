#include "Date.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

Date::Date()
{
  day = 1;
  month = 1;
  year = 2021;
}

Date::Date( int d , int m , int y )
{
  if (y >= 2021) 
  {
        year = y;
    } else {
        year = 2021; 
    }

    if (m >= 1 && m <= 12) {
        month = m;
    } else {
        month = 1;
  }
 day = d;
}

bool Date::setDay( int d )
{
  if(d >= 0.0)
  {
  day = d;
  return true;
  }
  else
  {
  day = 1;
  return false;
  }
}

bool Date::setMonth( int m ){
   if(m >= 0.0)
  {
  month = m;
  return true;
  }
  else
  {
  month = 1;
  return false;
  }
}

bool Date::setYear( int y )
{
   if(y >= 0.0)
  {
  year = y;
  return true;
  }
  else
  {
  year = 1;
  return false;
  }
}


int Date::getDay() const{
  return day;
}

int Date::getMonth() const{
  return month;
}

int Date::getYear() const{
  return year;
}

string Date::showDate() const{
string dayStr, monthStr, yearStr; 

if (day < 10)
    dayStr = "0" + to_string(day);
else 
    dayStr = to_string(day);

if (month < 10) 
    monthStr = "0" + to_string(month);
else
    monthStr = to_string(month);

yearStr = to_string(year);

return monthStr + "/" + dayStr + "/" + yearStr;
}
