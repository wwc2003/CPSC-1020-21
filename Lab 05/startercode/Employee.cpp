#include "Employee.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

Employee::Employee()
{
    
}
string Employee::getCompany()
{
    return company;
}
string Employee::getTitle()
{
    return title;
}
void Employee::setCompany(string c)
{
    company = c;
}
void Employee::setTitle(string t)
{
    title = t;
}