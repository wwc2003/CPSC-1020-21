#include "palindrome.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  string s;
  cin >> s;
  palindrome p( s );
  cout << p << endl;
  return 0;
}
