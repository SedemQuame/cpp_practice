#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
    clockType myClock(8, 23, 50);
    clockType yourClock(8, 23, 50);
    clockType tempClock(9, 16, 25);

    cout << "Line 9: myClock: ";
    myClock.printTime();
    cout << endl;

    cout << "Line 12: yourClock: ";
    yourClock.printTime();
    cout << endl;

    cout << "Line 15: tempClock: ";
    tempClock.printTime();
    cout << endl;

    // Compare myClock and yourClock
    if (myClock == yourClock)
    {
        cout << "Line 19: The time of myClock and "
             << "yourClock are equal. " << endl;
    }
    else
    {
        cout << "Line 21: The time of myClock and "
             << "yourClock are not equal." << endl;
    }

    // Compare myClock and yourClock
    if (myClock == tempClock)
    {
        cout << "Line 23: The time of myClock and "
             << "tempClock are equal. " << endl;
    }
    else
    {
        cout << "Line 25: The time of myClock and "
             << "tempClock are not equal." << endl;
    }

    return 0;
}