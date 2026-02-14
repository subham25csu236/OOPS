#include <iostream>            // data hiding
using namespace std;           // Allowed // s1.name = "XYZ";  NOT allowed (private)
class student {                // s1.setname("XYZ");
    private:
    string name;
    int roll;
    float marks;
    public:
    student(string n , int r , float m) {
        name = n;
        roll = r;
        marks = m;
    }
    string getname () {
        return name;
    }
    int getroll () {
        return roll;
    }
    float getmarks () {
        return marks;
    }

    void setname(string n) {
        name = n;
    }
    void setroll(int r) {
        roll = r;
    }
    void setmarks(float m) {
        marks = m;
    }

    void display () {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main () {
    student s1("ABC",233,1232.231);
    s1.display();
    return 0;
}



// getter & setter function

/*  -> Getter functions
    string getName() { return name; }
    int getRoll() { return roll; }
    float getMarks() { return marks; }

    -> Setter functions
    void setName(string n) { name = n; }
    void setRoll(int r) { roll = r; }
    void setMarks(float m) { marks = m; }*/