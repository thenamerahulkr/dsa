#include <iostream>
#include <string>
using namespace std;
class Cricketer {
public:
    string name;
    int age;
    string team;
    int runs;
    // Parameterized constructor
    Cricketer(string name, int age, string team, int runs){
        this->name=name;
        this->age=age;
        this->team=team;
        this->runs=runs;
    }
    // Method to display cricketer details
    void displayDetails(){
        cout << "Age: " << age << "\n";
        cout << "Name: " << name << "\n";
        cout << "Team: " << team << "\n";
        cout << "Runs: " << runs << '\n';   
    }
};

int main() {
    // Creating a Cricketer object using the parameterized constructor
    Cricketer cricketer1("Virat Kohli", 35, "India", 12000);

    // Displaying details of cricketer
    cout << "Cricketer 1 Details:\n";
    cricketer1.displayDetails();

    return 0;
}
