#include "Shape.h"
#include <iostream>
using namespace std;

int main()
{
    // Array of pointers to Shape for polymorphism
    Shape *arr[3];

    // Creating objects dynamically
    arr[0] = new Rectangle(4.0, 6.0);
    arr[1] = new Circle(2.0);
    arr[2] = new Square(4.0);

    // Demonstrate polymorphism by calling overridden methods
    for (int i = 0; i < 3; i++)
    {
        arr[i]->getArea();
        arr[i]->getPerimeter();
    }

    // Clean up
    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
    }

    return 0;
}
