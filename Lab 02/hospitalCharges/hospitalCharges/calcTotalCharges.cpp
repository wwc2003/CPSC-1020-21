#include "calcTotalCharges.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

double calcTotalCharges(int days, double rate, double services, double medication)
{
	double final_price = (days * rate) + services + medication;
	return final_price;
}

double calcTotalCharges(double services, double medication) {
	double final_price = services + medication;
	return final_price;
}
