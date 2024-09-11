#include "Invoice.h"
#include "Car.h"
#include "Employee.h"
#include "Motorcycle.h"
#include "Motorscooter.h"
#include "Passtype.h"
#include "Student.h"
#include "Vendor.h"
#include "Visitor.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string.h>

using namespace std;

int main( int argc , char* argv[] )
{
  const int annual_cost = 184;
  const int semester_cost = 92;
  const int one_day = 10;
  const int parknride = 50;
  string type_of_customer;
  string type_of_vehicle;
  string student_year, student_major;
  string emp_title, emp_company;
  string user_vehicle;
  string make, model, plate, pass;
  int year;
  double total_price = 100;
  Employee e;
  Vendor ve;
  Student s;
  Visitor vs;
  Motorcycle m;
  Motorscooter ms;
  Car c;
  Passtype p;


  cout << "Welcome to Clemson Parking" << endl;
  cout << "Please Fill Out This Form to Get Your Ticket" << endl << endl;
  cout << "Are you a student, employee, visitor or vendor?: ";
  cin >> type_of_customer;

  if(type_of_customer == "student")
  {
  p.setpassType(type_of_customer);
  cout << "What year are you?: ";
  cin >> student_year;
  s.setYear(student_year);
  cout << "What is your major: ";
  cin >> student_major;
  s.setMajor(student_major);
  }
  else if(type_of_customer == "employee")
  {
    p.setpassType(type_of_customer);
    cout << "What company do you work for: ";
    cin >> emp_company;
    e.setCompany(emp_company);
    cout << "What is your title: ";
    cin >> emp_title;
    e.setTitle(emp_title);
    total_price = total_price - 50;
  }
  else if(type_of_customer == "visitor")
  {
    p.setpassType(type_of_customer);
    cout << "Where are you from?: ";
    cin >> emp_title;
    vs.setTitle(emp_title);
    cout << "Are you a US citizen? ";
    cin >> emp_company;
    vs.setCompany(emp_company);
  }
  else if(type_of_customer == "vendor")
  {
    p.setpassType(type_of_customer);
    cout << "What company do you work for: ";
    cin >> emp_company;
    ve.setCompany(emp_company);
    cout << "What is your title: ";
    cin >> emp_title;
    ve.setTitle(emp_title);
  }

  cout << "What type of vehicle do you drive? (car, motorcycle, motorscooter): ";
  cin >> user_vehicle;
  if(user_vehicle == "car")
  {
  cout << "What is your make: ";
  cin >> make;
  c.setMake(make);
  cout << "What is your model: ";
  cin >> model;
  c.setModel(model);
  cout << "What is your year: ";
  cin >> year;
  c.setYear(year);
  cout << "What is your plate # ";
  cin >> plate;
  c.setPlate(plate);
  }
  else  if(user_vehicle == "motorcycle")
  {
  cout << "What is your make: ";
  cin >> make;
  m.setMake(make);
  cout << "What is your model: ";
  cin >> model;
  m.setModel(model);
  cout << "What is your year: ";
  cin >> year;
  m.setYear(year);
  cout << "What is your plate # ";
  cin >> plate;
  m.setPlate(plate);
  }
  else  if(user_vehicle == "motorcycle")
  {
  cout << "What is your make: ";
  cin >> make;
  ms.setMake(make);
  cout << "What is your model: ";
  cin >> model;
  ms.setModel(model);
  cout << "What is your year: ";
  cin >> year;
  ms.setYear(year);
  cout << "What is your plate # ";
  cin >> plate;
  ms.setPlate(plate);
  }
  
  cout << "What type of pass would you like? (Annual, Semester, Park&Ride, One Day)";
  cin >> pass;

  if(pass == "Annual")
  {
    p.setpassType(pass);
    total_price =+ annual_cost;
  }
   else if(pass == "Semester")
{
     total_price =+ semester_cost;
      p.setpassType(pass);
}
else if(pass == "Park&Ride")
{
     total_price =+ parknride;
      p.setpassType(pass);
}
else if(pass == "One Day")
{
     total_price =+ one_day;
      p.setpassType(pass);
}

Invoice i;
i.calculatePrice(total_price);
i.printInvoice();


  return 0;
}
