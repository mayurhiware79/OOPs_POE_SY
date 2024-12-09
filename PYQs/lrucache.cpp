#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class LRUCache
{
private:
    int capacity;        // Maximum size of the cache
    list<int> cacheList; // Linked list to store cache keys

public:
    // Constructor to set cache capacity
    LRUCache(int cap) : capacity(cap) {}

    // Function to refer to a key
    void refer(int key)
    {
        // Find the key in the list
        auto it = find(cacheList.begin(), cacheList.end(), key);

        if (it == cacheList.end())
        { // If key is not found
            if (cacheList.size() == capacity)
            {
                cacheList.pop_back(); // Remove least recently used (last element)
            }
        }
        else
        {
            cacheList.erase(it); // Remove key from its current position
        }

        cacheList.push_front(key); // Add key to the front (most recent)
    }

    // Function to display the cache contents
    void display()
    {
        cout << "Cache content: ";
        for (int key : cacheList)
        {
            cout << key << " ";
        }
        cout << endl;
    }
};

int main()
{
    LRUCache cache(3); // Create a cache with capacity of 3

    cache.refer(1);
    cache.refer(2);
    cache.refer(3);
    cache.display(); // Output: 3 2 1

    cache.refer(4);  // 1 is removed
    cache.display(); // Output: 4 3 2

    cache.refer(2);  // 2 becomes the most recent
    cache.display(); // Output: 2 4 3

    cache.refer(5);  // 3 is removed
    cache.display(); // Output: 5 2 4

    return 0;
}
