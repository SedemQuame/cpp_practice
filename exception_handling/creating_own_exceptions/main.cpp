#include <iostream>
#include <string>

using namespace std;

class divisionByZero
{
public:
    divisionByZero()
    {
        message = "Division by zero";
    }

    divisionByZero(string str)
    {
        message = str;
    }

    string what()
    {
        return message;
    }

private:
    string message;
};

int main()
{
    int dividend, divisor, quotient;
    try
    {
        cout << "Line 10: Enter the dividend: ";
        cin >> dividend;
        cout << endl;

        cout << "Line 13: Enter the divisor: ";
        cin >> divisor;
        cout << endl;

        if (divisor == 0)
        {
            throw divisionByZero();
        }

        quotient = dividend / divisor;
        cout << "Line 19: Quotient = " << quotient << endl;
    }
    catch (divisionByZero divByZeroObj)
    {
        cout << "Line 22: In the divisionByZero "
             << "catch block: "
             << divByZeroObj.what()
             << endl;
    }

    return 0;
}