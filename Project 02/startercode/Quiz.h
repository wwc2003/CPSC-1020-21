#ifndef QUIZ_H
#define QUIZ_H

#include <string>

class Quiz{
private:
  std::string question;
  std::string answer;
  //static int score;
public:
  Quiz( std::string q , std::string a ):question(q),answer(a){};
  std::string getQuestion();
  std::string getAnswer();
  static int getScore(){ return score; };
  static void updateScore( int val );
  static int score;

  friend std::string printResult( int questions , int correct , int wrong );
};

#endif  

