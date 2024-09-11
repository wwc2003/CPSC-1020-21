#include "Visitor.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

Visitor::Visitor()
{
    
}
string Visitor::getCompany()
{
    return company;
}
string Visitor::getTitle()
{
    return title;
}
void Visitor::setCompany(string c)
{
    company = c;
}
void Visitor::setTitle(string t)
{
    title = t;
}
