#include <iostream>

using namespace std;

int main()
{
    int *p;
    char *name;
    string *str;

    // allocate memory of type int and store
    // the address of the allocated memory in p
    p = new int;
    *p = 28;

    name = new char[5];
    strcpy(name, "John");

    str = new string;
    *str = "Sunny Day";

    // Cleaning up the memory space
    delete p;
    delete[] name;
    delete str;
    
    return 0;
}