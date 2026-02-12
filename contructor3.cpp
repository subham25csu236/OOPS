#include <iostream>        // constructor overloading
using namespace std;
class student {
    public:
    string name;
    int roll;
    float marks;
    student () {
        name = "ANONYMOUS";
        roll = 236;
        marks = 100;
    }   
    student(int r , float m){
        roll = r;
        marks = m;
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
    student s2(236,90.00);
    s2.name = "XYZ";
    s2.display();
    return 0;
}