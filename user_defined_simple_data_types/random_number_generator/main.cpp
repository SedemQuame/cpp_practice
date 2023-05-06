#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

const int RANDOM_RANGE = 1000;
const int DOUBLE_MULTIPLE = 2;
const int BASE_10_MARKER = 10;
const int UPPER_BOUND_FOR_SINGLE_DIGIT = 9;

// function that generates random numbers
int generateRandomNumber()
{
    // Providing a seed value
    srand((unsigned)time(NULL));
    // Generating a random number
    int random = rand() % RANDOM_RANGE;
    return random;
}

// function that doubles a number
int doubleNumber(double number)
{
    return number * DOUBLE_MULTIPLE;
}

// function raise the number by the exponent.
int raiseByExponent(int number, int exponent)
{
    return pow(number, exponent);
}

// function to sum up the digits in a number.
int sumDigits(int number)
{
    int sumOfDigits = 0;
    while (number > 9)
    {
        sumOfDigits += number;
        number = number % BASE_10_MARKER;
    }
    sumOfDigits += number;
    return sumOfDigits;
}

// function to raise first digit to second digit. [answers e and f]
int raiseFirstDigitToSecondDigit(int number)
{
    int firstNum, lastNum = 0;
    if (number > UPPER_BOUND_FOR_SINGLE_DIGIT)
    {
        lastNum = number % BASE_10_MARKER;
    }
    firstNum = number % BASE_10_MARKER;

    cout << "firstNum: " << firstNum << " lastNum: " << lastNum << endl;
    return pow(firstNum, lastNum);
}

void displayOperationsMenu()
{
    cout << "------------------------------------------------------" << endl;
    cout << "+ Please enter a choice on the operation to perform. +" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "1. Double the number. " << endl;
    cout << "2. Reverse the digits of the number. " << endl;
    cout << "3. Raise the number of the power of 2, 3 or 4. " << endl;
    cout << "4. Sum the digits of the number. " << endl;
    cout << "5. Find exponent of two-digit number. " << endl;
    cout << "6. Find exponent of three-digit number. " << endl;
    cout << "------------------------------------------------------" << endl;
}

void getOperationChoice(int &choice)
{
    cout << "Enter your choice, to perform an operation: " << endl;
    cin >> choice;
}

int callOperationBasedOnUsersChoice(int choice, int randomNumber)
{
    int operationResult;
    switch (choice)
    {
    case 1:
        operationResult = doubleNumber(randomNumber);
        break;
    case 2:
        // operationResult = reverseDigits(randomNumber);
        break;
    case 3:
        int exponent;
        cout << "Enter exponent from 2 to 4: " << endl;
        cin >> exponent;

        if (exponent < 2 && exponent > 4)
        {
            cout << "Exponent must be from 2 to 4." << endl;
            break;
        }
        operationResult = raiseByExponent(randomNumber, exponent);
    case 4:
        operationResult = sumDigits(randomNumber);
        break;
    case 5:
        operationResult = raiseFirstDigitToSecondDigit(randomNumber);
    }
    return operationResult;
}

int main()
{
    long int randomNumber = generateRandomNumber();
    int choice;
    char continueExecution = 'Y';

    cout << "Random number generated is: " << randomNumber << endl;

    while (continueExecution == 'Y' or continueExecution == 'y')
    {
        displayOperationsMenu();
        getOperationChoice(choice);
        int resultFromOperation = callOperationBasedOnUsersChoice(choice, randomNumber);
        cout << "Result from operation: " << resultFromOperation << endl;
        cout << "Do you want to continue execution (Y/N)? " << endl;
        cin >> continueExecution;
    }

    return 0;
}
