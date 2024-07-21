#include <iostream>
#include <utility> 

using namespace std;

int main() {
    // Creating a pair
    pair<int, string> p1;
    p1.first = 1;
    p1.second = "one";

    // Using make_pair to create a pair
    pair<int, string> p2 = make_pair(2, "two");

    // Initializing a pair with constructor
    pair<int, string> p3(3, "three");

    // Accessing pair elements
    cout << "Pair 1: " << p1.first << ", " << p1.second << endl;
    cout << "Pair 2: " << p2.first << ", " << p2.second << endl;
    cout << "Pair 3: " << p3.first << ", " << p3.second << endl;

    return 0;
}
