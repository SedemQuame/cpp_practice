#include <iostream>
using namespace std;

class classExample
{
public:
    void setX(int a);
    // Function to set the value of x
    // Postcondition: x = a
    void print() const;
    // Function to output the value of x

private:
    int x;
};

void classExample::setX(int a)
{
    x = a;
}

void classExample::print() const
{
    cout << "x = " << x << endl;
}