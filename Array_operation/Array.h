#include <iostream>
using namespace std;

class Array
{

    // input output operator overloading
    friend ostream &operator<<(ostream &out, const Array &t);
    friend istream &operator>>(istream &input, Array &t);

private:
    int size;
    int *ptr; // pointer to first element of array

public:
    Array(int size = 10);  // default constrctor
    Array(const Array &t); // copy constructor
    ~Array();              // destructor

    int getsize() const;
    const Array &operator=(const Array &t); // assignment operator
    bool operator==(const Array &) const;   // equality operator
    int &operator[](int);                   // Subscript operator for non-const
    const int &operator[](int) const;       // Subscript operator for const
};