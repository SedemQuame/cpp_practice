#include <iostream>
#include <iomanip>
#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType myYard(25, 18);
    cout << fixed << showpoint << setprecision(2);

    cout << "myYard area: " << myYard.area() << endl;
    cout << "Passing object myyard to the friend "
         << "function rectangleFriend." << endl;

    rectangleFriend(myYard);

    return 0;
}