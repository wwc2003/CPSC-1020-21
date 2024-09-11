#include "Date.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  int day, month, year;

  cin >> month >> day >> year;
  Date d( month , day , year );
  cout << d.print().c_str() << endl;
  return 0;
}
