#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int x = 10;
    // auto mutableLambda = [x]() mutable {
    //     x++;
    //     std::cout << "Inside lambda: " << x << std::endl;
    // };
    // mutableLambda(); // Output: Inside lambda: 11
    // std::cout << "Outside lambda: " << x << std::endl; // Output: Outside lambda: 10
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2};

    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a < b;
    });

    for (int n : vec) {
        std::cout << n << " "; // Output: 1 1 2 3 4 5 9
    }
    auto multiply = [](auto x, auto y) {
        return x * y;
    };
    std::cout << "Multiplication: " << multiply(2, 3.5) << std::endl; // Output: 7

    auto add = [](int x, int y) -> double {
        return x + y + 0.5;
    };
    std::cout << "Sum with return type: " << add(3, 4) << std::endl; // Output: 7.5

    return 0;
}