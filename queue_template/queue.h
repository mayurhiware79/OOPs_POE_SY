#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <typename T>
class Queue
{
private:
    T *arr;    // Pointer to dynamically allocate the queue array
    int size;  // Maximum size of the queue
    int front; // Index of the front element
    int rear;  // Index of the rear element
    int count; // Current number of elements in the queue
public:
    Queue(int size);                // Constructor to initialize the queue
    ~Queue();                       // Destructor to free memory
    void enqueue(const T &element); // Add an element to the queue
    T dequeue();                    // Remove an element from the queue
    bool isEmpty() const;           // Check if the queue is empty
    bool isFull() const;            // Check if the queue is full
    void display() const;           // Display the queue contents
};

#endif
