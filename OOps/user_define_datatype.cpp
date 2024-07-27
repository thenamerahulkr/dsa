#include <iostream>
#include <string>
class Student {
public:
    std::string name;
    int age;
    int rollNumber;

    // Method to display student details
    void displayDetails() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Roll Number: " << rollNumber << "\n";
    }
};

int main() {
    // Creating a Student object
    Student student1;

    // Initializing the attributes directly
    student1.name = "Rahul Kumar";
    student1.age = 20;
    student1.rollNumber = 10264;

    // Displaying the student details
    student1.displayDetails();

    // Modifying student details directly
    student1.name = "Rahul K.";
    student1.age = 21;

    // Displaying the modified student details
    std::cout << "\nModified Details:\n";
    student1.displayDetails();

    return 0;
}
