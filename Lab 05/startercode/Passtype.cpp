#include "Passtype.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

Passtype::Passtype(){   
}
string Passtype::getpassType()
{
return passtype;
}
void Passtype::setpassType(string p)
{
if(p == "Annual")
passtype = p;
else if(p == "Semester")
passtype = p;
else if(p == "Park&Ride")
passtype = p;
else if(p == "One Day")
passtype == p;
}
