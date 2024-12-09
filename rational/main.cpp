#include <iostream>
using namespace std;
#include "rational.h"

int main()
{
    Rational a(6, 2);
    Rational b(2, 3);
    Rational c;

    cout << "First Number :";
    a.print();
    cout << "Second Number :";
    b.print();

    c = a.add(b);
    cout << "Addition: ";
    c.print();

    c = a.sub(b);
    cout << "subtraction: ";
    c.print();

    c = a.mul(b);
    cout << "Multiplication: ";
    c.print();

    c = a.div(b);
    cout << "Division: ";
    c.print();
    return 0;
}