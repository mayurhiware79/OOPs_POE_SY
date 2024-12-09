#include <iostream>
#include "INR.h"
#include "USD.h"
using namespace std;

int main()
{
    // Create INR object with amount
    INR inr = 123.50f;

    // Display INR value in rupees and paisa
    cout << "INR (Rupees): " << inr.getRupees()
         << ", Paisa: " << inr.getPaisa() << endl;

    // Convert INR to float
    float amount = inr;
    cout << "Amount in float: " << amount << endl;

    // Convert INR to USD
    USD usd;
    usd = inr;
    cout << "Equivalent USD: " << usd.getDollar() << endl;

    return 0;
}
