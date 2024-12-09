#include "queue.h"

// Constructor
template <typename T>
Queue<T>::Queue(int size)
{
    this->size = size;
    arr = new T[size];
    front = 0;
    rear = -1;
    count = 0;
}

// Destructor
template <typename T>
Queue<T>::~Queue()
{
    delete[] arr; // Free allocated memory
}

// Enqueue operation
template <typename T>
void Queue<T>::enqueue(const T &element)
{
    if (!isFull())
    {
        rear = (rear + 1) % size; // Circular increment of rear
        arr[rear] = element;
        count++;
    }
    else
    {
        cout << "Queue overflow: Cannot enqueue into a full queue.\n";
    }
}

// Dequeue operation
template <typename T>
T Queue<T>::dequeue()
{
    if (!isEmpty())
    {
        T element = arr[front];
        front = (front + 1) % size; // Circular increment of front
        count--;
        return element;
    }
    else
    {
        cout << "Queue underflow: Cannot dequeue from an empty queue.\n";
        return T(); // Return default value for type T
    }
}

// Check if the queue is empty
template <typename T>
bool Queue<T>::isEmpty() const
{
    return count == 0;
}

// Check if the queue is full
template <typename T>
bool Queue<T>::isFull() const
{
    return count == size;
}

// Display queue contents
template <typename T>
void Queue<T>::display() const
{
    if (isEmpty())
    {
        cout << "Queue is empty.\n";
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            cout << arr[(front + i) % size] << " "; // Circular traversal
        }
        cout << endl;
    }
}

// Explicit instantiation for specific types
template class Queue<int>;
template class Queue<string>;
