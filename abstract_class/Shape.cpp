#include "Shape.h"
#include <iostream>
using namespace std;

// Rectangle class methods
Rectangle::Rectangle(double l, double b) : length(l), breadth(b) {}

void Rectangle::getArea()
{
    cout << "Area of Rectangle is " << length * breadth << endl;
}

void Rectangle::getPerimeter()
{
    cout << "Perimeter of Rectangle is " << 2 * (length + breadth) << endl;
}

// Circle class methods
Circle::Circle(double rad) : radius(rad) {}

void Circle::getArea()
{
    cout << "Area of Circle is " << 3.14 * radius * radius << endl;
}

void Circle::getPerimeter()
{
    cout << "Perimeter of Circle is " << 2 * 3.14 * radius << endl;
}

// Square class methods
Square::Square(double s) : side(s) {}

void Square::getArea()
{
    cout << "Area of Square is " << side * side << endl;
}

void Square::getPerimeter()
{
    cout << "Perimeter of Square is " << 4 * side << endl;
}
