#include "rewardPoints.h"
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
	int rides;
	int points;
	cout << "How many rides did you complete? ";
	cin >> rides;
	points = calculatePoints(rides);
	printResult(points);
	return;
}

void printResult(int points) 
{

	cout << "You have earned " << points << " points.";
	return;
}

int calculatePoints(int rides) {

	int points;

	if (rides == 1)
	{
		points = 3;
	}
	else if (rides == 2)
	{
		points = 10;
	}
	else if (rides == 3)
	{
		points = 15;
	}
	else if (rides == 4)
	{
		points = 30;
	}
	else if (rides >= 5)
	{
		points = 50;
	}
	else
	{
		points = 0;
	}

	return points;
}

