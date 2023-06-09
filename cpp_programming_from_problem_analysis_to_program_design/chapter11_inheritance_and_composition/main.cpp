#include <iostream>
#include <iomanip>
#include "rectangleTypeImp.cpp"
#include "boxTypeImp.cpp"

using namespace std;

int main()
{
    rectangleType yard;
    double fenceCostPerFoot;
    double fertilizerCostPerSquareFoot;
    double length, width;
    double billingAmount;

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 14: Enter the length and width of the "
         << "yard (in feet): ";
    cin >> length >> width;
    cout << endl;

    yard.setDimension(length, width);

    cout << "Line 18: Enter the cost of fence "
         << "(per foot): $";
    cin >> fenceCostPerFoot;
    cout << endl;

    cout << "Line 21: Enter the cost of fertilizer "
         << "(per square foot): $";
    cin >> fertilizerCostPerSquareFoot;
    cout << endl;

    billingAmount = yard.perimeter() * fenceCostPerFoot + yard.area() * fertilizerCostPerSquareFoot;
    cout << "Line 25: Amount due: $" << billingAmount << endl;

    boxType package;
    double height;
    double wrappingCostPerSquareFeet;

    cout << "Line 29: Enter the cost (25 to 50 cents) of "
         << "wrapping paper (per square foot)";
    cin >> wrappingCostPerSquareFeet;
    cout << endl;

    billingAmount = wrappingCostPerSquareFeet * package.area() / 100;
    if (billingAmount < 1.00)
    {
        billingAmount = 1.00;
    }

    cout << "Line 39: Amount due: $" << billingAmount << endl;

    return 0;
}