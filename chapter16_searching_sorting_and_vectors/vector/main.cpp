#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> intList;
    unsigned int i;

    intList.push_back(24);
    intList.push_back(39);
    intList.push_back(90);
    intList.push_back(66);

    cout << "Line 12: List Elements: ";

    for (i = 0; i < intList.size(); i++)
    {
        cout << "\t" << intList[i];
    }
    cout << endl;

    for (i = 0; i < intList.size(); i++)
    {
        intList[i] = intList[i] * 2;
    }

    cout << "Line 18: List Elements: ";

    for (i = 0; i < intList.size(); i++)
    {
        cout << "\t" << intList[i];
    }

    cout << endl;

    return 0;
}