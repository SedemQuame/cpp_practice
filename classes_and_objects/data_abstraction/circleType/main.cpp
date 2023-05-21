#include <iostream>
#include <iomanip>
#include "circleTypeImp.cpp"

using namespace std;

int main()
{
    circleType circle1(8);
    circleType circle2;

    double radius;
    cout << fixed << showpoint << setprecision(2);

    cout << "Line 11: circle1 - "
         << "radius: " << circle1.getRadius()
         << ", area: " << circle1.area()
         << ", circumference: "
         << circle1.circumference() << endl;

    cout << "Line 12: circle2 - "
         << "radius: " << circle2.getRadius()
         << ", area: " << circle2.area()
         << ", circumference: "
         << circle2.circumference() << endl
         << endl;

    cout << "Line 13: Enter the radius: ";
    cin >> radius;
    cout << endl;

    circle2.setRadius(radius);

    cout << "Line 17: After setting the radius."
         << endl;

    cout << "Line 18: circle2 - "
         << "radius: " << circle2.getRadius()
         << ", area: " << circle2.area()
         << ", circumference: "
         << circle2.circumference() << endl;

    return 0;
}