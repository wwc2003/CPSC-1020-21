#include "palindrome.h"
#include <string>
#include <ostream>

palindrome::palindrome( std::string s ){
  if( isPalindrome( s ) ){
    pal = s;
  }
  else{
    pal = "";
  }
}

std::ostream& operator<<( std::ostream &os , const palindrome &p ){
  os << p.pal;
  return os;
}

bool palindrome::isPalindrome( std::string s ){
 int left = 0;
  int right = s.length() - 1;

  while (left < right) {
    if (s[left] != s[right]) {
      return false;
    }
    left++;
    right--;
  }

  return true;
}
