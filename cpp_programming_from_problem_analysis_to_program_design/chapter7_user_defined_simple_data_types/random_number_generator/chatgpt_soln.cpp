#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to double the number
int doubleNumber(int num)
{
    return num * 2;
}

// Function to reverse the digits of the number
int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to raise the number to a power
int raiseToPower(int num, int power)
{
    return pow(num, power);
}

// Function to sum the digits of the number
int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to raise the first digit to the power of the second digit
int raiseFirstToSecond(int num)
{
    int first = num / 10;
    int second = num % 10;
    return pow(first, second);
}

// Function to raise the first two digits to the power of the last digit
int raiseFirstTwoToLast(int num)
{
    int first = num / 100;
    int second = (num / 10) % 10;
    int last = num % 10;
    if (last <= 4)
        return pow(first * 10 + second, last);
    else
        return num;
}

int main()
{
    int number;
    srand(time(NULL)); // initialize random seed

    // Generate random number between 10 and 99 inclusive
    number = rand() % 90 + 10;

    // Loop until user chooses to exit
    while (true)
    {
        cout << "Current number: " << number << endl;
        cout << "1. Double the number\n";
        cout << "2. Reverse the digits of the number\n";
        cout << "3. Raise the number to the power of 2, 3, or 4\n";
        cout << "4. Sum the digits of the number\n";
        cout << "5. Raise the first digit to the power of the second digit (if two-digit number)\n";
        cout << "6. Raise the first two digits to the power of the last digit (if three-digit number and last digit <= 4)\n";
        cout << "7. Exit\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            number = doubleNumber(number);
            break;
        case 2:
            number = reverseNumber(number);
            break;
        case 3:
            number = raiseToPower(number);
            break;
        case 4:
            number = sumDigits(number);
            break;
        case 5:
            if (number >= 10 && number <= 99)
            {
                number = raiseFirstToSecond(number);
            }
            else
            {
                cout << "Invalid choice!\n";
            }
            break;
        case 6:
            if (number >= 100 && number <= 999 && number % 10 <= 4)
            {
                number = raiseFirstTwoToLast(number);
            }
            else
            {
                cout << "Invalid choice!\n";
            }
            break;
        case 7:
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }

        if (number < 10)
        {
            number += 10;
        }

        if (isPrime(number))
        {
            cout << "Current number is prime.\n";
        }
        else
        {
            cout << "Current number is not prime.\n";
        }
    }

    return 0;
}
