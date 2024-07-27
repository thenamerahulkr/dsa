#include <iostream>
#include <string>

class Car {
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    // Default constructor
    Car() : make("Unknown"), model("Unknown"), year(0), color("Unknown") {}

    // Constructor with two parameters
    Car(std::string mke, std::string mdl) 
        : make(mke), model(mdl), year(0), color("Unknown") {}

    // Constructor with four parameters
    Car(std::string mke, std::string mdl, int yr, std::string clr) 
        : make(mke), model(mdl), year(yr), color(clr) {}

    // Method to display car details
    void displayDetails() {
        std::cout << "Make: " << make << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "Color: " << color << "\n";
    }
};

int main() {
    // Creating Car objects using different constructors
    Car car1; // Default constructor
    Car car2("Toyota", "Camry"); // Constructor with two parameters
    Car car3("Honda", "Civic", 2020, "Red"); // Constructor with four parameters

    // Displaying the car details
    std::cout << "Car 1 Details:\n";
    car1.displayDetails();

    std::cout << "\nCar 2 Details:\n";
    car2.displayDetails();

    std::cout << "\nCar 3 Details:\n";
    car3.displayDetails();

    // Modifying car details directly
    car1.color = "Blue";
    car2.year = 2018;

    // Displaying the modified car details
    std::cout << "\nModified Car 1 Details:\n";
    car1.displayDetails();

    std::cout << "\nModified Car 2 Details:\n";
    car2.displayDetails();

    return 0;
}
