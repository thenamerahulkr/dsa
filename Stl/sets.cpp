#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Creating a set of integers
    set<int> mySet;

    // Inserting elements   //O(logn)
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // Attempting to insert a duplicate element (will be ignored)
    mySet.insert(20);

    // Printing elements
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


    set<int> mySet = {10, 20, 30, 40, 50};

    // Inserting elements
    mySet.insert(60);
    mySet.insert(70);

    // Erasing an element
    mySet.erase(20);

    // Searching for an element
    auto it = mySet.find(30);
    if (it != mySet.end()) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // Checking the size
    cout << "Set size: " << mySet.size() << endl;

    // Checking if set is empty
    cout << "Is set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // Clearing the set
    mySet.clear();
    cout << "Set size after clear: " << mySet.size() << endl;



     // Using iterator to traverse the set
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using range-based for loop
    for (const auto& val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}