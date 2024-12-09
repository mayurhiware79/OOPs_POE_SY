#include "Array.h"

// constructor
Array ::Array(int size) : size(size > 0 ? size : 10)
{

    ptr = new int[size];
    // Initialize array elements to 0
    for (int i = 0; i < size; i++)
    {
        ptr[i] = 0;
    }
}

Array ::Array(const Array &t) : size(t.size)
{
    ptr = new int[size]; // same size cpy
    for (int i = 0; i < size; i++)
    {
        ptr[i] = t.ptr[i]; // element cpy
    }
}

// destructor
Array ::~Array()
{
    delete[] ptr;
}

int Array ::getsize() const
{
    return size;
}

// assignment operator
const Array &Array ::operator=(const Array &right)
{
    if (this != &right)
    {
        if (size != right.size)
        {
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for (int i = 0; i < size; i++)
        {
            ptr[i] = right.ptr[i];
        }
    }
    return *this;
}

bool Array ::operator==(const Array &right) const // equality operator
{
    if (size != right.size)
    {
        return false;
    }
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] != right.ptr[i])
        {
            return false;
        }
    }
    return true;
}

// Subscript operator for non-const
int &Array ::operator[](int index)
{
    return ptr[index];
}

// Subscript operator for const
const int &Array ::operator[](int index) const
{
    return ptr[index];
}

ostream &operator<<(ostream &out, const Array &t)
{
    for (int i = 0; i < t.size; i++)
    {
        out << t.ptr[i] << " ";
    }
    out << endl;
    return out;
}

istream &operator>>(istream &input, Array &t)
{
    for (int i = 0; i < t.size; i++)
    {
        input >> t.ptr[i];
    }
    return input;
}
