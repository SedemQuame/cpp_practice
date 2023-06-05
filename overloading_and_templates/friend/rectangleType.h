class rectangleType
{
    friend void rectangleFriend(rectangleType recObject);

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;

    rectangleType(double l = 0, double w = 0);

private:
    double length;
    double width;
};

void rectangleFriend(rectangleType recFriendObject)
{
    std::cout << "recFriendObject area: " << recFriendObject.area() << std::endl;
    recFriendObject.length = recFriendObject.length + 5;
    recFriendObject.width = recFriendObject.width + 5;

    std::cout << "After increasing the length and width by 5 units "
              << "each, \n recFriendObject area: "
              << recFriendObject.area() << std::endl;
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}

void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
    {
        length = l;
    }
    else
    {
        length = 0;
    }

    if (w >= 0)
    {
        width = w;
    }
    else
    {
        width = 0;
    }
}