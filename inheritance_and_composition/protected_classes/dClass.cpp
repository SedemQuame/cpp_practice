#include "bClass.h"
#include "dClass.h"
#include <iostream>

using namespace std;

void dClass::setData(char ch, double v, int a)
{
    bClass::setData(v);
    bCh = ch;
    dA = a;
}
void dClass::print() const
{
    bClass::print();
    cout << "Derived class dA = " << dA << endl;
}

dClass::dClass(char ch, double u, int x) : bClass(ch, u)
{
    dA = x;
}