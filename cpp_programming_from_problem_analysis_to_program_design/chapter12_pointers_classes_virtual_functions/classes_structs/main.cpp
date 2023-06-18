#include <iostream>
#include "classExample.h"

using namespace std;

int main()
{
    classExample *cExpPtr;
    classExample cExpObject;

    cExpPtr = &cExpObject;

    // Using pointers to access class members.
    cExpPtr->setX(5);
    cExpPtr->print();

    return 0;
}