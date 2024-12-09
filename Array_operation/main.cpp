#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    Array array1(5);
    Array array2;

    cout << "Enter 5 integers for array1:" << endl;
    cin >> array1;

    cout << "Array1 is:" << endl
         << array1;

    cout << "Assigning array1 to array2..." << endl;
    array2 = array1;

    cout << "Array2 is:" << endl
         << array2;

    if (array1 == array2)
    {
        cout << "Array1 and Array2 are equal." << endl;
    }
    else
    {
        cout << "Array1 and Array2 are not equal." << endl;
    }

    array2[2] = 100;

    cout << "After modifying array2:" << endl;
    cout << "Array1 is:" << endl
         << array1;
    cout << "Array2 is:" << endl
         << array2;

    if (array1 == array2)
    {
        cout << "Array1 and Array2 are equal." << endl;
    }
    else
    {
        cout << "Array1 and Array2 are not equal." << endl;
    }

    return 0;
}
