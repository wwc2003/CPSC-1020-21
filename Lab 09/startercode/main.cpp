#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include "accum.h"

using namespace std;

int main( int argc , char* argv[] ){

  string intString = "int";
  string doubleString = "double";
  
  string type;
  cin >> type;

  if( type.c_str() == intString ){
    vector<int> vals;
    int val;
    while( cin >> val ){
      vals.push_back( val );
    }
    cout << "The result is " << accum<int>( vals ) << endl;
  }
  else if( type.c_str() == doubleString ){
    vector<double> vals;
    double val;
    while( cin >> val ){
      vals.push_back( val );
    }
    cout << "The result is " << accum<double>( vals ) << endl;
  }
  else{
    vector<string> vals;
    string val;
    while( cin >> val ){
      vals.push_back( val );
    }
    cout << "The result is " << accum<string>( vals ) << endl;
  }
  
  return 0;
}
