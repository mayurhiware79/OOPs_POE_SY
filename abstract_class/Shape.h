#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
public:
    // Pure virtual functions, making Shape an abstract class
    virtual void getArea() = 0;
    virtual void getPerimeter() = 0;
    virtual ~Shape() {} // Virtual destructor for proper cleanup
};

class Rectangle : public Shape
{
protected:
    double length, breadth;

public:
    Rectangle(double l, double b);
    void getArea();
    void getPerimeter();
};

class Circle : public Shape
{
protected:
    double radius;

public:
    Circle(double rad);
    void getArea();
    void getPerimeter();
};

class Square : public Shape
{
protected:
    double side;

public:
    Square(double side);
    void getArea();
    void getPerimeter();
};

#endif
