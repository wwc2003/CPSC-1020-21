#ifndef DATE_H
#define DATE_H

#include <string>

using namespace std;

class Date{
private:
  int day;
  int month;
  int year;
  string MONTHS[12] = { "JANUARY" , "FEBRUARY" , "MARCH" , "APRIL" , "MAY" , "JUNE" , "JULY" , "AUGUST" , "SEPTEMBER" , "OCTOBER" , "NOVEMBER" , "DECEMBER" };
public:
  Date();
  Date( int m , int d , int y );
  void setDay( int d );
  void setMonth( int m );
  void setYear( int y );
  int getDay() const;
  int getMonth() const;
  int getYear() const;
  string print() const;
  static bool compare( const  Date &d1 , const Date &d2 );
};

#endif

