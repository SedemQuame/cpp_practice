#include <iostream>

using namespace std;

void getData(char &, double &, double &, int &);

double calculateTaxOwed(char maritalStatus, double grossSalary, double incomePercentContributed);

int main()
{
    char maritalStatus;
    int numberOfChildren;
    double grossSalary;
    double incomePercentContributed;
    double taxAmountOwed;

    // get the users income amount.
    getData(maritalStatus, grossSalary, incomePercentContributed, numberOfChildren);
    cout << "Marital status: " << maritalStatus << endl;
    cout << "Number of children: " << numberOfChildren << endl;
    cout << "Gross salary: " << grossSalary << endl;
    cout << "Income Percent Contributed: " << incomePercentContributed << endl;

    // calculate federal tax amount owed
    taxAmountOwed = calculateTaxOwed(maritalStatus, grossSalary, incomePercentContributed);
    cout << "Federal tax owed: " << taxAmountOwed << endl;
    return 0;
}

void getData(char &maritalStatus, double &grossSalary, double &incomePercentContributed, int &numberOfChildren)
{
    cout << "Enter marital status(M/S) ";
    cin >> maritalStatus;

    if (maritalStatus == 'M')
    {
        cout << "Enter number of children ";
        cin >> numberOfChildren;
    }

    cout << "Enter gross salary ";
    cin >> grossSalary;

    cout << "Enter income contributed in percent(%) ";
    cin >> incomePercentContributed;
}

double calculateTaxOwed(char maritalStatus, double grossSalary, double incomePercentContributed)
{
    double taxableAmount = grossSalary * (1 - incomePercentContributed);
    cout << "Taxable amount" << taxableAmount;
    double taxOwed = 0;

    if (maritalStatus == 'M')
    {
        taxableAmount = taxableAmount - 7000.00;
    }
    else
    {
        taxableAmount = taxableAmount - 4000.00;
    }

    if (taxableAmount > 0 && taxableAmount <= 15000)
    {
        taxOwed = taxableAmount * 0.15;
    }
    else if (taxableAmount >= 15001 && taxableAmount <= 40000)
    {
        taxOwed = 2250 + (0.25 * taxableAmount);
    }
    else if (taxableAmount > 40000)
    {
        taxOwed = 8460 + (0.35 * taxableAmount);
    }
    else
    {
        cout << "Taxable amount is not valid";
    }

    return taxOwed;
}