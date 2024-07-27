#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    string name;
    int age;

    // Default constructor
    Person() : name("Unknown"), age(0) {}

    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {}

    // Method to display person details
    void displayDetails() const {
        cout << "Age: " << this->age << "\n";
        cout << "Name: " << this->name << "\n";
    }
    // Method to update age
    void updateAge(int &newAge) {
        this->age = newAge;
    }
};

int main() {
    // Creating a Person object using the parameterized constructor
    Person person1("Alice", 30);

    // Displaying details of person
    cout << "Person 1 Details:\n";
    person1.displayDetails();

    //modifying the detail of person 1
    int x=25;
    person1.updateAge(x);

    // Displaying the modified details of person2
    cout << "\nModified Person 1 Details:\n";
    person1.displayDetails();

    return 0;
}
