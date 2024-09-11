#ifndef PASSTYPE_H
#define PASSTYPE_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

class Passtype
{
    private:
    string passtype;
    public:
    Passtype();
    string getpassType();
    void setpassType(string p);
};
#endif