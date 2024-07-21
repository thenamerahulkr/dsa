#include<bits/stdc++.h>
using namespace std;
int main()
{
     stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Checking the size of the stack
    cout << "Stack size: " << myStack.size() << endl;

    // Checking if the stack is empty
    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    // Accessing the top element
    cout << "Top element: " << myStack.top() << endl;

    // Popping elements from the stack
    myStack.pop();
    cout << "Top element after pop: " << myStack.top() << endl;

    // Clearing the stack
    while (!myStack.empty()) {
        myStack.pop();
    }
    cout << "Stack size after clearing: " << myStack.size() << endl;

    return 0;
}