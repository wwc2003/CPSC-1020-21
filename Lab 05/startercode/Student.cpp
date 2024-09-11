#include "Student.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

Student::Student()
{
    
}
string Student::getMajor()
{
    return major;
}
string Student::getYear()
{
    return year;
}
void Student::setMajor(string m)
{
    major = m;
}
void Student::setYear(string y)
{
    year = y;
}
