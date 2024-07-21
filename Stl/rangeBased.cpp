#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // Using an iterator to traverse the vector
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << std::endl;

    // Using a const_iterator to traverse the vector
    vector<int>::const_iterator cit;
    for (cit = vec.cbegin(); cit != vec.cend(); ++cit) {
        cout << *cit << " ";
    }
    cout << std::endl;

    vector<int> vec = {1, 2, 3, 4, 5};

    // Using auto to declare the iterator
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << std::endl;

    // Using auto with a range-based for loop (C++11 and above)
    for (const auto& val : vec) {
        cout << val << " ";
    }
    cout << std::endl;



}