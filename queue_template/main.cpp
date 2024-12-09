#include "queue.h"
#include <string>

int main()
{
    // Integer queue with a size of 3
    Queue<int> intQueue(3);
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);
    intQueue.display(); // Displays: 10 20 30

    cout << "Dequeued: " << intQueue.dequeue() << endl; // Dequeues 10
    intQueue.display();                                 // Displays: 20 30

    intQueue.enqueue(40);
    intQueue.display(); // Displays: 20 30 40

    // String queue with a size of 3
    Queue<string> strQueue(3);
    strQueue.enqueue("Hello");
    strQueue.enqueue("World");
    strQueue.display(); // Displays: Hello World

    cout << "Dequeued: " << strQueue.dequeue() << endl; // Dequeues "Hello"
    strQueue.display();                                 // Displays: World

    strQueue.enqueue("Queue");
    strQueue.display(); // Displays: World Queue

    return 0;
}
