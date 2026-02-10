#include <iostream>         // classes with member function
using namespace std;
class employee {
    public:
    string name;
    int age;
    float salary;
    void display () {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main () {
    employee e1;
    e1.name = "XYZ";
    e1.age = 25;
    e1.salary = 2500000;
    e1.display();
    return 0;
}