#include <iostream>
using namespace std;

struct studentType
{
    char name[26];
    double gpa;
    int sID;
    char grade;
};

int main()
{
    studentType student;
    studentType *studentPtr;

    studentPtr = &student;
    (*studentPtr).gpa = 3.9;

    // '.' has a higher precendence than '*'.

    // to simplify the accessing of class or struct components
    // via pointers, C++ provides another operator called
    // member access operator arrow, '->'W      1q0-][=p-efgrt ]

    return 0;
}