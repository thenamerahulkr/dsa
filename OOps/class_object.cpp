#include <iostream>
#include <string>

class Car {
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    // Method to display car details
    void displayDetails() {
        std::cout << "Make: " << make << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "Color: " << color << "\n";
    }
};

int main() {
    // Creating a Car object
    Car car1;

    // Initializing the attributes directly
    car1.make = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    car1.color = "Red";

    // Displaying the car details
    car1.displayDetails();

    // Modifying car details directly
    car1.color = "Blue";

    // Displaying the modified car details
    std::cout << "\nModified Details:\n";
    car1.displayDetails();

    return 0;
}
