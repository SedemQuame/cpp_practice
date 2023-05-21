#ifndef DCLASS_H
#define DCLASS_H

#include "bClass.h"
class dClass : public bClass
{
public:
    void setData(char, double, int);
    void print() const;
    dClass(char ch = '*', double u = 0.0, int x = 0);

private:
    int dA;
};

#endif