#include "rational.h"

Rational ::Rational()
{
    num = 1;
    den = 1;
}

Rational ::Rational(int n, int d)
{
    num = n;
    den = d;
}

void Rational ::print()
{
    reduce();
    cout << num << "/" << den << endl;
}

Rational Rational ::add(Rational a)
{
    Rational temp;
    temp.num = (num * a.den) + (den * a.num);
    temp.den = (den * a.den);
    return temp;
}

Rational Rational ::sub(Rational a)
{
    Rational temp;
    temp.num = (num * a.den) - (den * a.num);
    temp.den = (den * a.den);
    return temp;
}
Rational Rational ::mul(Rational a)
{
    Rational temp;
    temp.num = (num * a.num);
    temp.den = (den * a.den);
    return temp;
}
Rational Rational ::div(Rational a)
{
    Rational temp;
    temp.num = (num * a.den);
    temp.den = (den * a.num);
    return temp;
}

int Rational ::gcd(int a, int b)
{
    int c;
    while (a != 0)
    {
        c = a;
        a = b % a;
        b = c;
    }
    return b;
}

void Rational ::reduce()
{
    int g = gcd(num, den);

    num /= g;
    den /= g;
}