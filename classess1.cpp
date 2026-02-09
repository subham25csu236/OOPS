#include <iostream>        // class with data
using namespace std;
class student {
    public :
    int roll;
    string name;
    float marks; 
};
int main () {
    student s1;
    s1.roll = 100;
    s1.name = "ABC";
    s1.marks = 95.505;
    cout << s1.roll << endl;
    cout << s1.name << endl;
    cout << s1.marks << endl;
    return 0;
}