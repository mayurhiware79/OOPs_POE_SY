#include <iostream>
using namespace std;

class Rational
{

private:
    int num;
    int den;

public:
    Rational();
    Rational(int n, int d);
    void print();
    Rational add(Rational);
    Rational sub(Rational);
    Rational mul(Rational);
    Rational div(Rational);

    int gcd(int n, int d);
    void reduce();
};