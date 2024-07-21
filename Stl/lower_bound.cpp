#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int> vec = {10, 20, 30, 40, 50};

    // Finding the first element not less than 30
    auto it = lower_bound(vec.begin(), vec.end(), 30);

    if (it != vec.end()) {
        cout << "Lower bound for 30 is " << *it << " at position " << distance(vec.begin(), it) << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

