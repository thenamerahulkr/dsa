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
    //changing through pointer
    void Change(Cricketer* c){
        (*c).name="kumar"; // c->name="kumar"
    }
};
int main() {
    // Creating a Cricketer object using the parameterized constructor
    Cricketer cricketer1("Virat Kohli", 35, "India", 12000);
    Cricketer* p1=&cricketer1;
   
    cout<<(*p1).name<<'\n';
    (*p1).name="rahul";
    cout<<(*p1).name<<'\n';
    cricketer1.Change(&cricketer1);
    cout<<(*p1).name<<'\n';
    

}
