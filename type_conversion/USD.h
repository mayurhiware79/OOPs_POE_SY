#ifndef USD_H
#define USD_H

class USD
{
private:
    float dollar; // Amount in dollars
public:
    USD(float d = 0.0f) : dollar(d) {}

    // Getter for dollar
    float getDollar() const { return dollar; }

    // Setter for dollar
    void setDollar(float d) { dollar = d; }

    // Overload assignment operator for INR
    USD &operator=(const class INR &inr);

    // Conversion to float
    operator float() const { return dollar; }
};

#endif
