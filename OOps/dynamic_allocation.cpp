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
    // Cricketer cricketer1("Virat Kohli", 35, "India", 12000);
    Cricketer* cricketer1 = new Cricketer("Virat Kohli", 35, "India", 12000);

    //display using pointer
    cout<<(*cricketer1).name;
    cout<<'\n';
    cout<<cricketer1->age;

    // Displaying details of cricketer
    // cout << "Cricketer 1 Details:\n";
    // cricketer1.displayDetails();


    // int* ptr = new int(4);
    // cout<<(*ptr);


    return 0;
}
