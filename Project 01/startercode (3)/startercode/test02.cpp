#include "Date.h"
#include "calcDays.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char** argv ){
  int dayA, monthA, yearA;
  int dayB, monthB, yearB;

  cin >> monthA >> dayA >> yearA;
  cin >> monthB >> dayB >> yearB;
    
  Date dA( dayA , monthA , yearA );
  Date dB( dayB , monthB , yearB );
  cout << dA.showDate().c_str() << endl;
  cout << dB.showDate().c_str() << endl;
  fprintf( stdout , "There are %d days between %s and %s.\n" , calcDays( dA , dB ) , dA.showDate().c_str() , dB.showDate().c_str() );
  
  return 0;
}
