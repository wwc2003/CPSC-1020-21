#include "EncryptedString.h"
#include <string>
#include <ostream>

EncryptedString::EncryptedString( std::string s ){
  encrypt( s );
}

std::ostream& operator<<( std::ostream &os , const EncryptedString &e ){
  os << e.encrypted;
  return os;
}

void EncryptedString::encrypt( std::string s ){
   encrypted = "";
  for (char c : s) {
    if (isalpha(c)) {
      char base = islower(c) ? 'a' : 'A';
      encrypted += static_cast<char>(base + (c - base + 13) % 26);
    } else {
      encrypted += c;
    }
  }
}

std::string EncryptedString::decrypt() {
  std::string decrypted = "";
  for (char c : encrypted) {
    if (isalpha(c)) {
      char base = islower(c) ? 'a' : 'A';
      decrypted += static_cast<char>(base + (c - base + 13) % 26);
    } else {
      decrypted += c;
    }
  }
  return decrypted;
}
