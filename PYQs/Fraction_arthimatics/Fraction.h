#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

    // Helper function to simplify the fraction
    void simplify();

public:
    // Constructor
    Fraction(int num = 0, int denom = 1);

    // Overload input operator >>
    friend istream &operator>>(istream &input, Fraction &frac);

    // Overload output operator <<
    friend ostream &operator<<(ostream &output, const Fraction &frac);

    // Arithmetic operators
    Fraction operator+(const Fraction &other) const;
    Fraction operator-(const Fraction &other) const;
    Fraction operator*(const Fraction &other) const;
    Fraction operator/(const Fraction &other) const;
};

#endif // FRACTION_H
