#include "stack.h"
#include <string>

int main()
{
    // Integer stack with a size of 3
    Stack<int> intStack(3);
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display(); // Displays: 30 20 10

    cout << "Popped: " << intStack.pop() << endl; // Pops 30
    intStack.display();                           // Displays: 20 10

    // String stack with a size of 3
    Stack<string> strStack(3);
    strStack.push("Hello");
    strStack.push("World");
    strStack.display(); // Displays: World Hello

    cout << "Popped: " << strStack.pop() << endl; // Pops "World"
    strStack.display();                           // Displays: Hello

    return 0;
}
