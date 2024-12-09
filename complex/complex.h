#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex();
    Complex(int r, int i);

    void input();
    void print();

    Complex add(Complex b);
    Complex sub(Complex b);
};