#ifndef ENCRYPTEDSTRING_H
#define ENCRYPTEDSTRING_H

#include <string>
#include <ostream>

class EncryptedString: public std::string{
private:
  std::string encrypted;
  void encrypt( std::string s );
public:
  EncryptedString(){ encrypted = ""; };
  EncryptedString( std::string p );
  std::string decrypt();
  friend std::ostream& operator<<( std::ostream& os , const EncryptedString &e );
};

#endif

