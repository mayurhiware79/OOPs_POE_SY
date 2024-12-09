#include <iostream>
#include "Queue.h"
#include "QueueException.h"

using namespace std;

int menu()
{
    int choice;
    cout << "\n1. Enqueue Element" << endl;
    cout << "2. Dequeue Element" << endl;
    cout << "3. Exit" << endl;
    cout << "Your Choice: ";
    cin >> choice;
    return choice;
}

int main()
{
    Queue q(3); // Queue with a size of 3
    int choice;
    int element;

    do
    {
        choice = menu();

        switch (choice)
        {
        case 1:
            cout << "Enter number to insert: ";
            cin >> element;
            try
            {
                q.enqueue(element);
                cout << element << " inserted into queue" << endl;
            }
            catch (QueueException &e)
            {
                cout << e.getMessage() << endl;
            }
            break;

        case 2:
            try
            {
                element = q.dequeue();
                cout << element << " removed from queue" << endl;
            }
            catch (QueueException &e)
            {
                cout << e.getMessage() << endl;
            }
            break;

        case 3:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice! Try again!" << endl;
        }
    } while (choice != 3);

    return 0;
}

/* #include <iostream>
#include "Queue.h"
#include "QueueException.h"

using namespace std;

int main() {
    // Create a queue with a maximum size of 3
    Queue queue(3);

    try {
        cout << "Enqueuing 10 into the queue." << endl;
        queue.enqueue(10);

        cout << "Enqueuing 20 into the queue." << endl;
        queue.enqueue(20);

        cout << "Enqueuing 30 into the queue." << endl;
        queue.enqueue(30);

        cout << "Attempting to enqueue 40 into the queue (should cause overflow)." << endl;
        queue.enqueue(40); // This will throw an exception
    } catch (const QueueException &e) {
        cout << "Exception: " << e.getMessage() << endl;
    }

    try {
        cout << "\nDequeuing an element from the queue: " << queue.dequeue() << endl;
        cout << "Dequeuing an element from the queue: " << queue.dequeue() << endl;
        cout << "Dequeuing an element from the queue: " << queue.dequeue() << endl;

        cout << "Attempting to dequeue another element (should cause underflow)." << endl;
        queue.dequeue(); // This will throw an exception
    } catch (const QueueException &e) {
        cout << "Exception: " << e.getMessage() << endl;
    }

    return 0;
}
*/