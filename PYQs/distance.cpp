#include <iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f = 0, int i = 0) : feet(f), inches(i)
    {
        normalize();
    }

    // Normalize function to convert inches to feet if needed
    void normalize()
    {
        feet += inches / 12;
        inches = inches % 12;
    }

    // Overload + operator for Distance + Distance
    Distance operator+(const Distance &d) const
    {
        return Distance(feet + d.feet, inches + d.inches);
    }

    // Overload + operator for Distance + int
    Distance operator+(int value) const
    {
        return Distance(feet, inches + value);
    }

    // Friend function to handle int + Distance
    friend Distance operator+(int value, const Distance &d);

    // Display function
    void display() const
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

// Friend function implementation for int + Distance
Distance operator+(int value, const Distance &d)
{
    return Distance(d.feet, d.inches + value);
}

int main()
{
    Distance obj1(5, 9); // 5 feet 9 inches
    Distance obj2(3, 4); // 3 feet 4 inches

    Distance obj3 = obj1 + obj2; // Distance + Distance
    Distance obj4 = 10 + obj1;   // int + Distance
    Distance obj5 = obj2 + 10;   // Distance + int

    cout << "obj1: ";
    obj1.display();
    cout << "obj2: ";
    obj2.display();
    cout << "obj3 (obj1 + obj2): ";
    obj3.display();
    cout << "obj4 (10 + obj1): ";
    obj4.display();
    cout << "obj5 (obj2 + 10): ";
    obj5.display();

    return 0;
}
