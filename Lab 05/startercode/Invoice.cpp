#include "Invoice.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

Invoice::Invoice(){
}

double Invoice::calculatePrice(double p){
  price = p;
  return price;
}

void Invoice::printInvoice(){
  cout << "Your ticket cost is: $" << price << endl;
}
