#include "Vendor.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

Vendor::Vendor()
{
    
}
string Vendor::getCompany()
{
    return company;
}
string Vendor::getTitle()
{
    return title;
}
void Vendor::setCompany(string c)
{
    company = c;
}
void Vendor::setTitle(string t)
{
    title = t;
}
