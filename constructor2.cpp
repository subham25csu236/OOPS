#include <iostream>      // parameterised constructor
using namespace std;
class student {
    public:
    string name;
    int roll;
    float marks;
    student(string n,int r,float m){
        name = n;
        roll = r;
        marks = m;
    }
    void display () {
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main () {
    student s1("Unknown",236,100.00);
    s1.display();
    return 0;
}