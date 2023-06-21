#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // int i;
    // vector<string> A;

    // A.push_back("I");
    // A.push_back("am");
    // A.push_back("me");

    // for (int i = 0; i < A.size(); i++)
    // {
    //     /* code */
    //     cout << A.at(i) << "\t";
    // }

    // cout << endl;

    vector<char> v;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back('A' + i);
    }
    cout << v.size() << v.back() << endl;

    cout << v[0] << v.back() << endl;
    v.pop_back();
    cout << v.size() << v.back() << endl;

    for (size_t i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i];
    }

    cout << endl;
}