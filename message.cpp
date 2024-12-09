#include <iostream>
using namespace std;

class Message
{
private:
    string msg;

public:
    Message(string m = "OK") // constructor with default value
    {
        msg = m;
    }

    void print()
    {
        cout << msg << endl;
    }

    void print(string n)
    {
        cout << n << ":" << msg << endl;
    }

    friend void show(Message m);
};

void show(Message m)
{
    cout << m.msg << endl;
}

int main()
{
    Message e; // Constructor with default parameter.
    e.print();
    e.print("Status");
    Message a("Overflow"); // Constructor with passed parameter.
    a.print();
    a.print("Stack");

    show(e); // friend function
    return 0;
}