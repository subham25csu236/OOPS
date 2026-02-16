#include <iostream>         // destructor : cleaning up 
using namespace std;
class student {
    public:
    string name;
    int roll;
    float marks;
    student(string n , int r , float m){
        name = n;
        roll = r;
        marks = m;
    }
    void display () {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
    ~student () {
        cout << "Destructor called for : " << name << endl;
    }
};
int main () {
    student s1("ABC",236,89.56);
    s1.display();
    student s2("XYZ",236,90.23);
    s2.display();
    return 0;
}