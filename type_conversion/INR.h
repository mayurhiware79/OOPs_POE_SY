#ifndef INR_H
#define INR_H

#include "USD.h"

class INR
{
private:
    int rupees;
    int paisa;

public:
    // Constructor with default values
    INR(int r = 0, int p = 0) : rupees(r), paisa(p) {}

    // Constructor for converting float to INR
    INR(float amount)
    {
        rupees = static_cast<int>(amount);
        paisa = static_cast<int>((amount - rupees) * 100);
    }

    // Setter and getter for rupees
    void setRupees(int r) { rupees = r; }
    int getRupees() const { return rupees; }

    // Setter and getter for paisa
    void setPaisa(int p) { paisa = p; }
    int getPaisa() const { return paisa; }

    // Conversion to float
    operator float() const
    {
        return rupees + paisa / 100.0f;
    }

    // Conversion to USD
    operator USD() const
    {
        float amountInRupees = *this; // Use conversion to float
        float conversionRate = 82.0f; // Conversion rate: 1 USD = 82 INR
        return USD(amountInRupees / conversionRate);
    }
};

#endif
