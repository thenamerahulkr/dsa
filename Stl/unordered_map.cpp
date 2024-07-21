
#include <iostream>
#include <unordered_map>
int main() {
    std::unordered_map<int, std::string> myUnorderedMap;

    // Inserting elements
    myUnorderedMap[1] = "One";
    myUnorderedMap[2] = "Two";
    myUnorderedMap.insert({3, "Three"});

    // Accessing elements
    std::cout << "Element at key 1: " << myUnorderedMap[1] << std::endl;

    // Iterating through elements
    for (const auto &pair : myUnorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Finding an element
    auto it = myUnorderedMap.find(2);
    if (it != myUnorderedMap.end()) {
        std::cout << "Found element at key 2: " << it->second << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    // Erasing an element
    myUnorderedMap.erase(2);
    std::cout << "Element at key 2 after erase: " << (myUnorderedMap.find(2) != myUnorderedMap.end() ? myUnorderedMap[2] : "Not found") << std::endl;

    return 0;
}

