#include "time.h"
#include <iostream>
using namespace std;

int main()
{

    Time t1(23, 59, 59);

    cout << "t1 =";
    t1.standardDisplay();
    cout << endl;
    cout << "t1 =";
    t1.militaryDisplay();
    cout << endl;

    Time t2 = ++t1; // calling copy constructor & opeartor overloading

    cout << "t2 =";
    t2.standardDisplay();
    cout << endl;
    cout << "t2 =";
    t2.militaryDisplay();
    cout << endl;
    return 0;
}