#include<bits/stdc++.h>
using namespace std;
int main()
{
     queue<int> myQueue;

    // Enqueueing elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Checking the size of the queue
    cout << "Queue size: " << myQueue.size() << endl;

    // Checking if the queue is empty
    cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    // Accessing the front and back elements
    cout << "Front element: " << myQueue.front() << endl;
    cout << "Back element: " << myQueue.back() << endl;

    // Dequeueing elements
    myQueue.pop();
    cout << "Front element after pop: " << myQueue.front() << endl;

    // Clearing the queue
    while (!myQueue.empty()) {
        myQueue.pop();
    }
    cout << "Queue size after clearing: " << myQueue.size() << endl;
}