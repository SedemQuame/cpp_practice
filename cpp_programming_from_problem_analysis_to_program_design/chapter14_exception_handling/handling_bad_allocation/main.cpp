// Handling bad_alloc exception thrown by the operator new.

#include <iostream>
using namespace std;

int main()
{
    int *list[100000];
    try
    {
        for (int i = 0; i < 100; i++)
        {
            list[i] = new int[500000000000000000];
            cout << "Line 11: Created list[" << i
            << "] of 500000000 components."
            << endl;
        }
    }
    catch (bad_alloc be)
    {
        cout << "Line 16: In the bad_alloc catch "
             << "block: " << be.what() << "."
             << endl;
    }

    return 0;
}