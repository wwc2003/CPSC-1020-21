#include "Quiz.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>


int Quiz::score = 0;

std::string Quiz::getQuestion(){
  return question;
}

std::string Quiz::getAnswer(){
  return answer;
}

void Quiz::updateScore(int val) {
    score = score + val;
    if (score < 0) {
        score = 0;
    }
}
