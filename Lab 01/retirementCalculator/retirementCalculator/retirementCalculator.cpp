#include "retirementCalculator.h"
#include <string>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[]) {
	runProgram();
	return 0;
}

void runProgram() 
{
	double P;
	double r;
	int t;



	cout << "How much money did your account start with? $";
	cin >> P;
	cout << "What interest rate ( between 0 and 1) does your account have? ";
	cin >> r;
	cout << "For how many years were you earning interest? ";
	cin >> t;
	

	double result = calculateBalance(P, r, t);
	printResult(result);

	return;
}

void printResult(double balance) 
{
	cout << "You have a balance of $" << balance << ".";
	return;
}

double calculateBalance(double P, double r, int t)
{
	double result = P * pow((1 + r), t);


	return result;
}

