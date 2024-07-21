#include<bits/stdc++.h>
int main()
{
    // Declare a map of integers to strings
    std::map<int, std::string> myMap;
    
    // Insert elements into the map
    myMap[1] = "One";  //=>O(logn)
    myMap[2] = "Two";
    myMap[3] = "Three";
    
    // Declare an iterator for the map
    std::map<int, std::string>::iterator it;
    
    // Iterate through the map using the iterator
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        // Access the key and value using the iterator
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
    
    // Finding an element using find()
    it = myMap.find(2);
    if (it != myMap.end()) {
        std::cout << "Found element at key 2: " << it->second << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    
    // Erasing an element 
    myMap.erase(2);
    
    // Iterating again to show the updated map
    std::cout << "Map after erasing element at key 2:" << std::endl;
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }
    
    return 0;
}