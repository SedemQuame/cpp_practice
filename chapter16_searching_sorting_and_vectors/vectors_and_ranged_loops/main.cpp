#include <iostream>
#include <vector>

using namespace std;

void doubleList(vector<int> &list);
void printList(const vector<int> &list);

int main()
{
    vector<int> intList = {24, 39, 90, 66};

    cout << "intList: ";
    printList(intList);

    doubleList(intList);

    cout << "intList after multiplying each "
         << "element by 2: ";
    printList(intList);

    cout << endl;

    return 0;
}

void printList(const vector<int> &list)
{
    for (auto p : list)
    {
        cout << "\t" << p;
    }
    cout << endl;
}

void doubleList(vector<int> &list)
{
    for (auto &p : list)
    {
        p = p * 2;
    }
}