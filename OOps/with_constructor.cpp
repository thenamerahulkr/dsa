#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int age;
    int rollNumber;

    // Constructor
    Student(string name,int age,int rollNumber){
        name=name;
        age=age;
        rollNumber=rollNumber;
    }

    // Method to display student details
    void displayDetails() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
    }
};

int main() {
    // Creating a Student object
    Student student1("Rahul Kumar", 20, 10264);

    // Displaying the student details
    student1.displayDetails();

    // Modifying student details directly
    student1.name = "Rahul K.";
    student1.age = 21;

    // Displaying the modified student details
    cout << "\nModified Details:\n";
    student1.displayDetails();

    return 0;
}
