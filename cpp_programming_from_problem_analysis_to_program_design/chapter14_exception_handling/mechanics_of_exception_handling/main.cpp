#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, quotient;
    try
    {
        cout << "Line 8: Enter the dividend: ";
        cin >> dividend;
        cout << endl;

        cout << "Line 11: Enter the divisor: ";
        cin >> divisor;
        cout << endl;

        if (divisor == 0)
        {
            throw 0;
        }

        quotient = dividend / divisor;

        cout << "Line 17: Quotient = " << quotient << endl;
    }
    catch (int)
    {
        cout << "Line 21: Division by 0. " << endl;
    }

    return 0;
}