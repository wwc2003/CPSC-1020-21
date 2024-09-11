#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

class Date{
private:
  int day;
  int month;
  int year;
public:
  Date();
  Date( int d , int m , int y );
  bool setDay( int d );
  bool setMonth( int m );
  bool setYear( int y );
  int getDay() const;
  int getMonth() const;
  int getYear() const;
  string showDate() const;
};

#endif

