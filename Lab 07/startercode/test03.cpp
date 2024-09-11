#include "DivisionSales.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  vector<int> q;
  for( int i = 0; i < 4; i++ ){
    int v;
    cin >> v;
    q.push_back( v );
  }

  DivisionSales d( q[0] , q[1] , q[2] , q[3] );
  for( int i = 1; i < 5; i++ ){
    fprintf( stdout , "Q%d: $% 10.2f\n" , i , d.reportQuarterSales( i ) * 1.0 );
  }

  fprintf( stdout , "T : $% 10.2f\n" , DivisionSales::reportTotalSales() * 1.0 );
  return 0;
}
