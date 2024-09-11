#include "Date.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  int dayA, monthA, yearA;
  int dayB, monthB, yearB;
  cin >> monthA >> dayA >> yearA >> monthB >> dayB >> yearB;
  Date dA( monthA , dayA , yearA );
  Date dB( monthB , dayB , yearB );

  if( Date::compare( dA , dB ) ){
    cout << dA.print().c_str() << " occurs before " << dB.print().c_str() << endl;
  }
  else{
    cout << dA.print().c_str() << " does not occur before " << dB.print().c_str() << endl;
  }
  
  return 0;
}
