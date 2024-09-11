#include "Quiz.h"
#include "printResult.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;



int main( int argc , char* argv[] ){
  string questionFilename = string( argv[1] );
  vector<Quiz> quizVector;

 // int score = 0;
  int correctAnswers = 0;
  int incorrectAnswers = 0;
  srand(static_cast<unsigned>(time(0)));

  ifstream questionFile( questionFilename.c_str() );

while (!questionFile.eof()) {
        char line[80];
        questionFile.getline(line, 80);
        std::string fullLine(line);

        int answerPos = fullLine.find("A: ");
        if (answerPos < 0) {
            break;
        }
        std::string question = fullLine.substr(3, answerPos - 3);
        std::string answer = fullLine.substr(answerPos + 3);
        Quiz q(question, answer);
        quizVector.push_back(q);
    }
   
std::random_shuffle(quizVector.begin(), quizVector.end());
   
 for (Quiz& q : quizVector) 
 {
    std::cout << q.getQuestion() << endl;
    std::string userAnswer;
    std::cin >> userAnswer;

    if (userAnswer == q.getAnswer()) 
    {
      cout << "Correct!" << endl;
       Quiz::updateScore(1);
      correctAnswers++;
      cout << "Current score: " << q.getScore() << endl;
    } 
    else 
    {
      cout << "Wrong! Correct answer: " << q.getAnswer() << endl;
      Quiz::updateScore(-1);
      cout << "Current score: " << q.getScore() << endl;
      incorrectAnswers++;
        }
    }
   
    std::string result = printResult(quizVector.size(), correctAnswers, incorrectAnswers);
    std::cout << result;
   
   
   
   
   
    //cerr << "Question: " << question << endl;
    //cerr << "Answer  : " << answer << endl;
    //cerr << q.getScore() << endl;

    
    
  
  return 0;
}
