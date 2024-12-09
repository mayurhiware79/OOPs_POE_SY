#include <iostream>
#include "complex.h"

Complex ::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(int r, int i)
{
    real = r;
    imag = i;
}

void Complex ::input()
{
    cout << "Enter real part of Complex number: ";
    cin >> real;
    cout << "Enter imaginary part of Complex number : ";
    cin >> imag;
}

void Complex ::print()
{
    cout << real << "+" << imag << "i" << endl;
}

Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real = this->real + c.real;
    temp.imag = this->imag + c.imag;
    return temp;
}

Complex Complex::sub(Complex c)
{
    Complex temp;
    temp.real = this->real - c.real;
    temp.imag = this->imag - c.imag;
    return temp;
}
