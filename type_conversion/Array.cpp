#include "USD.h"
#include "INR.h"

// Implementation of the assignment operator for USD
USD &USD::operator=(const INR &inr)
{
    // Convert INR to USD using the conversion rate
    dollar = static_cast<float>(inr) / 82.0f; // Assume 1 USD = 82 INR
    return *this;
}
