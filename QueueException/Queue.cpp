#include "Queue.h"
#include "QueueException.h"

Queue::Queue(int size) : size(size), front(-1), rear(-1)
{
    ptr = new int[size];
}

Queue::~Queue()
{
    delete[] ptr;
}

bool Queue::isFull() const
{
    return (front == 0 && rear == size - 1) || (rear + 1 == front);
}

bool Queue::isEmpty() const
{
    return front == -1;
}

void Queue::enqueue(int element)
{
    if (isFull())
    {
        throw QueueException("Queue Overflow");
    }

    if (rear == size - 1)
    {
        rear = 0; // Wrap around
    }
    else
    {
        rear++;
    }

    ptr[rear] = element;

    if (front == -1)
    {
        front = 0; // Update front if queue was empty
    }
}

int Queue::dequeue()
{
    if (isEmpty())
    {
        throw QueueException("Queue Underflow");
    }

    int element = ptr[front];

    if (front == rear)
    {
        // Reset to empty queue state
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0; // Wrap around
    }
    else
    {
        front++;
    }

    return element;
}
