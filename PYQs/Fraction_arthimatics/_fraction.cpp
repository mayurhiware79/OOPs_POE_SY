#include <iostream>
#include <stdexcept> // For exception handling
#include <numeric>   // For std::gcd
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

    // Helper function to simplify the fraction
    void simplify()
    {
        int gcd = std::gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;

        // Ensure denominator is always positive
        if (denominator < 0)
        {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    // Constructor
    Fraction(int num = 0, int denom = 1)
    {
        if (denom == 0)
        {
            throw invalid_argument("Denominator cannot be zero.");
        }
        numerator = num;
        denominator = denom;
        simplify();
    }

    // Overload input operator >>
    friend istream &operator>>(istream &input, Fraction &frac)
    {
        cout << "Enter numerator: ";
        input >> frac.numerator;
        cout << "Enter denominator: ";
        input >> frac.denominator;
        if (frac.denominator == 0)
        {
            throw invalid_argument("Denominator cannot be zero.");
        }
        frac.simplify();
        return input;
    }

    // Overload output operator <<
    friend ostream &operator<<(ostream &output, const Fraction &frac)
    {
        output << frac.numerator << "/" << frac.denominator;
        return output;
    }

    // Overload addition operator +
    Fraction operator+(const Fraction &other) const
    {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    // Overload subtraction operator -
    Fraction operator-(const Fraction &other) const
    {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    // Overload multiplication operator *
    Fraction operator*(const Fraction &other) const
    {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    // Overload division operator /
    Fraction operator/(const Fraction &other) const
    {
        if (other.numerator == 0)
        {
            throw invalid_argument("Cannot divide by a fraction with zero numerator.");
        }
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Fraction(num, denom);
    }
};

int main()
{
    try
    {
        Fraction frac1, frac2, result;
        int choice;

        do
        {
            // Display menu
            cout << "\nFraction Calculator\n";
            cout << "===================\n";
            cout << "1. Add two fractions\n";
            cout << "2. Subtract two fractions\n";
            cout << "3. Multiply two fractions\n";
            cout << "4. Divide two fractions\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice >= 1 && choice <= 4)
            {
                // Input two fractions
                cout << "Enter the first fraction:\n";
                cin >> frac1;
                cout << "Enter the second fraction:\n";
                cin >> frac2;

                // Perform the chosen operation
                switch (choice)
                {
                case 1:
                    result = frac1 + frac2;
                    cout << "Result: " << frac1 << " + " << frac2 << " = " << result << endl;
                    break;
                case 2:
                    result = frac1 - frac2;
                    cout << "Result: " << frac1 << " - " << frac2 << " = " << result << endl;
                    break;
                case 3:
                    result = frac1 * frac2;
                    cout << "Result: " << frac1 << " * " << frac2 << " = " << result << endl;
                    break;
                case 4:
                    result = frac1 / frac2;
                    cout << "Result: " << frac1 << " / " << frac2 << " = " << result << endl;
                    break;
                }
            }
            else if (choice != 5)
            {
                cout << "Invalid choice! Please try again.\n";
            }

        } while (choice != 5);

        cout << "Exiting Fraction Calculator. Goodbye!\n";
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
