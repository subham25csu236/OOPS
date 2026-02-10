#include <iostream>         // default constructor
using namespace std;
class student {
    public:
    string name;
    int roll;
    float marks;
    student () {
        name = "Unknown";
        roll = 123;
        marks = 100;
    }
    void display () {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main () {
    student s1;
    s1.display();
    return 0;
}