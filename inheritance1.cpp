#include <iostream>           // Inheritance allows a class to acquire the 
using namespace std;          // properties and functions of another class.
class person {
    public:
    string name;
    int age;
    void showperson () {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
class student : public person {
    public:
    int roll;
    void showstudent () {
        cout << "Roll no : " << roll << endl;   
    }
};
int main () {
    student s1;
    s1.name = "ABC";
    s1.age = 18;
    s1.roll = 132;
    s1.showperson();
    s1.showstudent();
    return 0;
}