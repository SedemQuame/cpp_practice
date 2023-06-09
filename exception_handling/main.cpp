// Division by zero.

#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, quotient;

    cout << "Line 6: Enter the dividend: ";
    cin >> dividend;
    cout << endl;

    cout << "Line 9: Enter the divisor: ";
    cin >> divisor;
    cout << endl;

    assert(divisor != 0);
    quotient = dividend / divisor;
    
    cout << "Line 13: Quotient = " << quotient << endl;

    return 0;
}