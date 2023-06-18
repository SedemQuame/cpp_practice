#include <iostream>
#include <string>
using namespace std;

const double SINGLE_STANDARD_EXEMPTION = 4000.0;
const double MARRIED_STANDARD_EXEMPTION = 7000.0;
const double PENSION_PERCENTAGE_LIMIT = 6.0;
const double TAX_RATE_1 = 0.15;
const double TAX_RATE_2 = 0.25;
const double TAX_RATE_3 = 0.35;
const double INCOME_LIMIT_1 = 15000.0;
const double INCOME_LIMIT_2 = 40000.0;
const double TAX_AMOUNT_1 = 2250.0;
const double TAX_AMOUNT_2 = 8460.0;
const double PERSONAL_EXEMPTION = 1500.0;
const double CHILDREN_PERSONAL_EXEMPTION = 1500.0 * 2;

void getData(char &maritalStatus, int &numChildren, double &grossSalary, double &pensionPercentage);
double calculateTaxableIncome(char maritalStatus, int numChildren, double grossSalary, double pensionPercentage);
double calculateTaxAmount(double taxableIncome);

int main()
{
    char maritalStatus;
    int numChildren = 0;
    double grossSalary, pensionPercentage;

    getData(maritalStatus, numChildren, grossSalary, pensionPercentage);

    double taxableIncome = calculateTaxableIncome(maritalStatus, numChildren, grossSalary, pensionPercentage);
    double taxAmount = calculateTaxAmount(taxableIncome);

    cout << "The federal tax amount is: $" << taxAmount << endl;

    return 0;
}

void getData(char &maritalStatus, int &numChildren, double &grossSalary, double &pensionPercentage)
{
    cout << "Enter marital status (M or S): ";
    cin >> maritalStatus;

    if (maritalStatus == 'M')
    {
        cout << "Enter number of children under the age of 14: ";
        cin >> numChildren;
    }

    cout << "Enter gross salary: $";
    cin >> grossSalary;

    cout << "Enter percentage of gross income contributed to a pension fund (up to 6%): ";
    cin >> pensionPercentage;

    if (pensionPercentage > PENSION_PERCENTAGE_LIMIT)
    {
        cout << "Warning: Pension contribution exceeds 6%." << endl;
    }
}

double calculateTaxableIncome(char maritalStatus, int numChildren, double grossSalary, double pensionPercentage)
{
    double standardExemption = (maritalStatus == 'M') ? MARRIED_STANDARD_EXEMPTION : SINGLE_STANDARD_EXEMPTION;
    double personalExemption = (numChildren > 0) ? CHILDREN_PERSONAL_EXEMPTION : PERSONAL_EXEMPTION;
    double pensionAmount = grossSalary * pensionPercentage / 100.0;
    double taxableIncome = grossSalary - standardExemption - personalExemption - pensionAmount;
    return taxableIncome;
}

double calculateTaxAmount(double taxableIncome)
{
    double taxAmount;
    if (taxableIncome <= INCOME_LIMIT_1)
    {
        taxAmount = taxableIncome * TAX_RATE_1;
    }
    else if (taxableIncome <= INCOME_LIMIT_2)
    {
        taxAmount = TAX_AMOUNT_1 + (taxableIncome - INCOME_LIMIT_1) * TAX_RATE_2;
    }
    else
    {
        taxAmount = TAX_AMOUNT_2 + (taxableIncome - INCOME_LIMIT_2) * TAX_RATE_3;
    }

    return taxAmount;
}