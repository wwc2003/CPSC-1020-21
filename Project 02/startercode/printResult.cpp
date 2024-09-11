#include "printResult.h"
#include "Quiz.h"
#include <sstream>

std::string printResult( int questions , int correct , int wrong )
{
  std::stringstream results;
  results << "Number of questions: " << questions << "\n";
  results << "Number correct answers: " << correct << "\n";
  results << "Number wrong answers: " << wrong << "\n";
  results << "Final score: " << Quiz::getScore() << "\n";
  return results.str();
}
