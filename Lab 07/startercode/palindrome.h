#ifndef PALINDROME_H
#define PALINDROME_H

#include <string>
#include <ostream>

class palindrome: public std::string{
private:
  std::string pal;
  bool isPalindrome( std::string s );
public:
  palindrome(){ pal = ""; };
  palindrome( std::string p );
  friend std::ostream& operator<<( std::ostream& os , const palindrome &p );
};

#endif

