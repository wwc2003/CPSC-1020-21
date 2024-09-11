#include "validateUserInput.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

bool validateUserInput(double value) 
{
	
	if (value > 0)
		return true;
	else
		return false;


}
