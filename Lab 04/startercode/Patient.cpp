#include "Patient.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

bool Patient::validInput( int d ){
  if(d >= 0)
  return true;
  else
  return false;
}

bool Patient::validInput( double c ){
  if(c >= 0)
  return true;
  else
  return false;
}

bool Patient::validInput( char pT ){
  if(pT == 'O' || pT == 'I')
  return true;
  else
  return false;
}

double Patient::calcTotalCharges(){
  return (days * rate) + services + medication;
}

int Patient::getDays(){
  return days;
}

bool Patient::setDays( int d )
{ 
  if(validInput(d))
{
  days = d;
  return true;
}
  else
  return false;
}

double Patient::getRate()
{
  return rate;
}

double Patient::getMedication()
{
  return medication;
}
double Patient::getServices()
{
  return services;
}

char Patient::getPatientType()
{
  return patientType;
}
bool Patient::setRate(double r)
{
  if(validInput(r))
  {
  rate = r;
  return true;
  }
  else
  return false;

}

bool Patient::setMedication(double m)
{
if(validInput(m)){
medication = m;
  return true;
}else
  return false;
}
bool Patient::setServices(double s)
{
  if(validInput(s))
  {
    services = s;
  return true;
  }
  else
  return false;
}
/*bool Patient::setPatientType(char pT)
{
  if(validInput(pT))
  {
  patientType = pT;
  return true;
  }
  else
  return false;
}
*/