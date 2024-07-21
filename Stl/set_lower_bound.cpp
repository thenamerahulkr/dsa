#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> mySet = {10, 20, 30, 40, 50};

    // Finding the first element not less than 35
    auto it = mySet.lower_bound(35);

    if (it != mySet.end()) {
        cout << "Lower bound for 35 is " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
    // upper bound

     // Finding the first element greater than 35
    auto it = mySet.upper_bound(35);

    if (it != mySet.end()) {
        cout << "Upper bound for 35 is " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
