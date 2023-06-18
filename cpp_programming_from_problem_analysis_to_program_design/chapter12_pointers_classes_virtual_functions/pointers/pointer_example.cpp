#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1416;

int main()
{
    double radius;
    double *radiusPtr;

    cout << fixed << showpoint << setprecision(2);
    radius = 25;
    radiusPtr = &radius;

    cout << "Line 12: Radius = " << radius
         << ", area = " << PI * radius * radius << endl;

    cout << "Line 13: Radius = " << *radiusPtr
         << ", area = " << PI * (*radiusPtr) * (*radiusPtr)
         << endl;

    cout << "Line 14: Enter the radius: ";
    cin >> *radiusPtr;
    cout << endl;

    cout << "Line 17: Radius = " << radius << ", area = "
         << PI * radius * radius << endl;

    cout << "Line 18: Radius = " << *radiusPtr << ", area = "
         << PI * (*radiusPtr) * (*radiusPtr) << endl
         << endl;

    cout << "Line 19: Address of radiusPtr: "
         << &radiusPtr << endl;
    cout << "Line 20: Value stored in radiusPtr: "
         << radiusPtr << endl;
    cout << "Line 21: Address of radius: "
         << &radius << endl;
    cout << "Line 22: Value stored in radius: "
         << radius << endl;
    return 0;
}