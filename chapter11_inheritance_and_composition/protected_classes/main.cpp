#include <iostream>
#include "dClass.h"

using namespace std;

int main()
{
    bClass bObject;
    dClass dObject;

    bObject.print();
    cout << endl;

    cout << "*** Derived class object ***" << endl;
    dObject.setData('&', 2.5, 7);
    dObject.print();
}