#include "stack.h"

// Constructor
template <typename T>
Stack<T>::Stack(int size)
{
    this->size = size;
    arr = new T[size];
    top = -1; // Initialize stack as empty
}

// Destructor
template <typename T>
Stack<T>::~Stack()
{
    delete[] arr; // Free allocated memory
}

// Push operation
template <typename T>
void Stack<T>::push(const T &element)
{
    if (!isFull())
    {
        arr[++top] = element; // Increment top and add element
    }
    else
    {
        cout << "Stack overflow: Cannot push onto a full stack.\n";
    }
}

// Pop operation
template <typename T>
T Stack<T>::pop()
{
    if (!isEmpty())
    {
        return arr[top--]; // Return top element and decrement top
    }
    else
    {
        cout << "Stack underflow: Cannot pop from an empty stack.\n";
        return T(); // Return default value for type T
    }
}

// Check if stack is empty
template <typename T>
bool Stack<T>::isEmpty() const
{
    return top == -1;
}

// Check if stack is full
template <typename T>
bool Stack<T>::isFull() const
{
    return top == size - 1;
}

// Display stack contents
template <typename T>
void Stack<T>::display() const
{
    if (isEmpty())
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " "; // Print elements from top to bottom
        }
        cout << endl;
    }
}

// Explicit instantiation for specific types
template class Stack<int>;
template class Stack<string>;
