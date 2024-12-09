#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template <typename T>
class Stack
{
private:
    T *arr;   // Pointer to dynamically allocate the stack array
    int size; // Maximum size of the stack
    int top;  // Index of the top element in the stack
public:
    Stack(int size);             // Constructor to initialize stack
    ~Stack();                    // Destructor to free memory
    void push(const T &element); // Push an element onto the stack
    T pop();                     // Pop an element from the stack
    bool isEmpty() const;        // Check if the stack is empty
    bool isFull() const;         // Check if the stack is full
    void display() const;        // Display the stack contents
};

#endif
