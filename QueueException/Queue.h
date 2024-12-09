#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
public:
    explicit Queue(int size); // Constructor
    ~Queue();                 // Destructor

    bool isFull() const;       // Check if queue is full
    bool isEmpty() const;      // Check if queue is empty
    void enqueue(int element); // Add element to queue
    int dequeue();             // Remove element from queue

private:
    int front; // Index of the front of the queue
    int rear;  // Index of the rear of the queue
    int size;  // Maximum number of elements in the queue
    int *ptr;  // Pointer to the queue array
};

#endif
