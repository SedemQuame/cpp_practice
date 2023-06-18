#include <iostream>
#include "rectangleType.h"

using namespace std;

int main()
{
    rectangleType rectangle1(23, 45);
    rectangleType rectangle2(12, 10);
    rectangleType rectangle3;
    rectangleType rectangle4;

    cout << "Line 10: rectangle1: ";
    rectangle1.print();
    cout << endl;

    cout << "Line 13: rectangle2: ";
    rectangle2.print();
    cout << endl;

    rectangle3 = rectangle1 + rectangle2;

    cout << "Line 17: rectangle3: ";
    rectangle3.print();
    cout << endl;

    rectangle4 = rectangle1 * rectangle2;

    cout << "Line 21: rectangle4: ";
    rectangle4.print();
    cout << endl;

    if (rectangle1 == rectangle2)
    {
        cout << "Line 25: rectangle1 and "
             << "rectangle2 are equal." << endl;
    }
    else
    {
        cout << "Line 27: rectangle1 and "
             << "rectangle2 are not equal."
             << endl;
    }

    if (rectangle1 != rectangle3)
    {
        cout << "Line 29: rectangle1 and "
             << "rectangle3 are not equal."
             << endl;
    }
    else
    {
        cout << "Line 31: rectangle and "
             << "rectangle3 are equal. " << endl;
    }

    // print and entering objects
    rectangleType myRectangle(23, 45);
    rectangleType yourRectangle;

    cout << "Line 33: myRectangle: " << myRectangle << endl;

    cout << "Line 35: Enter the length and width "
         << "of a rectangle: " << endl;

    cin >> yourRectangle;
    cout << endl;

    cout << "Line 12: yourRectangle: "
         << yourRectangle << endl;

    cout << "Line 13: myRectangle + yourRectangle: "
         << myRectangle + yourRectangle << endl;
    cout << "Line 14: myRectangle * yourRectangle: "
         << myRectangle * yourRectangle << endl;

    return 0;
}