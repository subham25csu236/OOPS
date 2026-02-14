/*Encapsulation in C++ :
“Encapsulation is the OOP concept of wrapping data (variables) and functions (methods) together inside a single unit called a class, so that the data and behavior are organized and bound together.”
It helps in modularity, organization, and reusability
Often combined with access specifiers to protect data (data hiding)
-> It helps in modularity, organization, and reusability
-> Often combined with access specifiers to protect data (data hiding)*/


#include <iostream>
using namespace std;
class Student {
public:  
    string name;
    int roll;
    float marks;
    void display() {   
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main() {
    Student s1;
    s1.name = "ABC";
    s1.roll = 101;
    s1.marks = 95.5;
    s1.display(); 
    return 0;
}