#include "validateUserInput.h"
#include "calcTotalCharges.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[]) 
{
	string user_input;
	double days;
	double rate;
	double services;
	double medication;
	cout << "What kind of care was this? ";
	cin >> user_input;	
	if (user_input == "inpatient")
	{
		cout << "Enter the number of days in the hospital: ";
		cin >> days;
		validateUserInput(days);
		cout << "Enter daily rate of the hospital room: ";
		cin >> rate;
		validateUserInput(rate);
		cout << "Enter total cost of hospital services: "; 
		cin >> services;
		validateUserInput(services);
		cout << "Enter total cost of medication: ";
		cin >> medication;
		validateUserInput(medication);
		cout << "Your total hospital bill is " << calcTotalCharges(days, rate, services, medication);
	}
	else if (user_input == "outpatient")
	{
		cout << "Enter total cost of hospital services: ";
		cin >> services;
		validateUserInput(services);
		cout << "Enter total cost of medication: ";
		cin >> medication;
		validateUserInput(medication);
		cout << "Your total hospital bill is $" << calcTotalCharges(services, medication);
	}
	else
	{

	}

	return 0;
}
