#include <iostream>
using namespace std;

int main()
{
    // saved 25 to memory space in x
    int x = 25;
    // print value of x in memory space
    cout << "x: " << x << endl;
    // pointer variable, that defaults lowest int value
    int *p;
    cout << "*p: " << *p << endl;
    // store the address of int x, to pointer p
    p = &x;
    cout << "p: " << p << endl;
    // referencing the value stored in *x
    cout << "*p: " << *p << endl;

    // declare an empty pointer variable
    int *p;
    // declare an empty int variable
    int num;
    // save 78 to num memory space
    num = 78;
    // save the memory space of num to p.
    p = &num;
    // overwrite the value of num, using the pointer p
    *p = 24;

    return 0;
}