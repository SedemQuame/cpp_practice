#include <iostream>
#include "rectangle.h"

int main()
{
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);

    int area = rect.getArea();
    std::cout << "Area: " << area << std::endl;

    return 0;
}