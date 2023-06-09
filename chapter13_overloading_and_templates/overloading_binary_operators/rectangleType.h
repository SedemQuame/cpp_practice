#ifndef RECTANGLE_TYPE_H
#define RECTANGLE_TYPE_H

using namespace std;
class rectangleType
{
public:
    void setDimension(double l, double w);
    // Function to set the length and width of the rectangle.
    // Postcondition: length = l; width = w;

    double getLength() const;
    // Functions to return the lenght of the rectangle.
    // Postcondition: The value of length is returned.

    double getWidth() const;
    // Function to return the width of the rectangle.
    // Postcondition: The value of width is returned.

    double area() const;
    // Function to return the area of the rectangle.
    // Postcondition: The area of the rectangle is calculated and returned.

    double perimeter() const;
    // Function to return the perimeter of the rectangle.
    // Postcondition: The perimeter of the rectangle is calculated and returned.

    void print() const;
    // Function to output the length and width of the rectangle.

    rectangleType operator+(const rectangleType &) const;
    // Overload the operator +

    rectangleType operator*(const rectangleType &) const;
    // Overload the operator *

    bool operator==(const rectangleType &) const;
    // Overload the operator ==

    bool operator!=(const rectangleType &) const;
    // Overload the operator !=

    // rectangleType();
    // Default constructor
    // Postcondition: length = l; width = w;

    rectangleType(double l = 0, double w = 0);
    // Constructor with parameters
    // Postcondition: length = l; width = w;

private:
    double length;
    double width;
};

#endif // RECTANGLE_TYPE_H