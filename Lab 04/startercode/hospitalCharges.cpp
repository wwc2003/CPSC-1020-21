#include "Patient.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] )
{
  string user_input;
  char patientStatus;
  Patient p;
  do
  {
  cout << "Enter the patient type (O for Outpatient, I for Inpatient): ";
  cin >> user_input;
  if(user_input == "Outpatient")
  {
    patientStatus = 'O';
  }
  if(user_input == "Inpatient")
  {
    patientStatus = 'I';
  }

  }while(!p.validInput(patientStatus));

  if(patientStatus == 'I')
  {

    int days;
    double rate, services, medication;

    do
    {
    cout << "Enter the number of days in the hospital: ";
    cin >> days;
    }while(!p.validInput(days));
    p.setDays(days);
    do
    {
    cout << "Enter the daily rate of the hospital room: ";
    cin >> rate;
    }while(!p.validInput(rate));
    do
    {
    cout << "Enter total cost of hospital services: "; 
    cin >> services;
    }while(!p.validInput(services));
    do
    {
    cout << "Enter total cost of medication: ";
    cin >> medication;
    }while(!p.validInput(medication));

    p.setRate(rate);
    p.setMedication(medication);
    p.setServices(services);
    printf("Your total bill is: %.2lf\n", p.calcTotalCharges());
  }


  else if(patientStatus == 'O')
  {
    double services, medication;
    do
    {
    cout << "Enter total cost of hospital services: "; 
    cin >> services;
    }while(!p.validInput(services));
    do
    {
    cout << "Enter total cost of medication: ";
    cin >> medication;
    }while(!p.validInput(medication));
    p.setMedication(medication);
    p.setServices(services);
    printf("Your total bill is: %.2lf\n", p.calcTotalCharges());

  }
  return 0;
}
