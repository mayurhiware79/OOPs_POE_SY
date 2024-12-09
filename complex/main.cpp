#include <iostream>
using namespace std;
#include "complex.h"

int main()
{

    Complex a(2, 6);
    a.print();

    Complex b, c, d;
    b.input();
    b.print();

    c = a.add(b);
    cout << "Addition of ";
    a.print();
    cout << " and ";
    b.print();
    cout << " is ";
    c.print();

    d = a.sub(b);
    cout << "Subtraction of ";
    a.print();
    cout << " and ";
    b.print();
    cout << " is ";
    d.print();
}