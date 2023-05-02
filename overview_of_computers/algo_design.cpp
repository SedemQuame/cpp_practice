#include <iostream>
using namespace std;
int main()
{
    int length = 10;
    int width = 20;

    float perimeter = 2 * (length + width);
    float area = length * width;

    std::cout << "Perimeter: " << perimeter;
    std::cout << "\nArea: " << area;
}