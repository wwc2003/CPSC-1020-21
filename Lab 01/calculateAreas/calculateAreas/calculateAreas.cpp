#include "calculateAreas.h"
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
	calculateAreas();
	return;
}

void printResult(string shape, double area) 
{
	cout << "The area of the " << shape << " is: " << area << endl;
	return;
}

void calculateAreas() 
{
	int user_input;
	double square_sides;
	double circle_radius;
	double triangle_length;
	double triangle_base;

	cout << "Enter a shape calculate the area of (1: square , 2: circle , 3: right triangle, 4: quit ): ";
	cin >> user_input;

	while (user_input > 0 && user_input < 4)
	{
		if (user_input == 1)
		{
			cout << "Enter the length of the square's sides: ";
			cin >> square_sides;
			double total = calculateSquare(square_sides);
			printResult("square", total);
		}
		else if (user_input == 2)
		{
			cout << "Enter the radius of the circle : ";
			cin >> circle_radius;
			double total = calculateCircle(circle_radius);
			printResult("circle", total);
		}
		else if (user_input == 3)
		{
			cout << "Enter the length and base of the right triangle: ";
			cin >> triangle_length >> triangle_base;
			double total = calculateRightTriangle(triangle_length, triangle_base);
			printResult("right triangle", total);
		}

		cout << "Enter a shape calculate the area of (1: square , 2: circle , 3: right triangle, 4: quit ) :";
		cin >> user_input;

	}
	return;
}

double calculateSquare(double side) {
	double squareArea = side * side;
	return squareArea;
}

double calculateCircle(double radius) {
	double circleArea = radius * radius * 3.14;
	return circleArea;
}

double calculateRightTriangle(double base, double height) 
{
	double triangleArea = base * height * .5;
	return triangleArea;
}


