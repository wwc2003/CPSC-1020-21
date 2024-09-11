#include "EncryptedString.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  char line[80];
  cin.getline( line , 80 );
  string s( line );
  EncryptedString e( s );
  cout << e << endl;
  cout << e.decrypt() << endl;
  return 0;
}
