#ifndef PATIENT_H
#define PATIENT_H

using namespace std;

class Patient{
private:
  int days;
  double rate;
  double services;
  double medication;
  char patientType;
  
 
public:
  Patient() : patientType('I'), days(0), rate(0.0), services(0.0), medication(0.0){}
  Patient( char p, int d, double r, double s, double m) : patientType(p), days(d), rate(r), services(s), medication(m){}
  Patient( char p, double s, double m) : patientType(p), services(s), medication(m){}
  double calcTotalCharges();
  bool validInput( int d);
  bool validInput( double c);
  bool validInput( char pT);

  // get and set functions using variable name
  int getDays();
  bool setDays( int );
  double getRate();
  bool setRate (double);
  double getServices( );
  bool setServices( double );
  double getMedication( );
  bool setMedication( double );
  char getPatientType();
 // bool setPatientType( char );

};

#endif

