#include <iostream>

using namespace std;

int main()
{
    int *intList;
    int arraySize;

    cout << "Enter array size: ";
    cin >> arraySize;
    cout << endl;

    intList = new int[arraySize];

    for (int i = 0; i < arraySize; i++)
        intList[i] = i * i;

    for (auto x : intList)
    {
        cout << x << endl;
    }
    return 0;
}