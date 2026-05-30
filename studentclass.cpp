#include <iostream>
using namespace std;

class Student {
    string name, address;
    int roll;

public:
    void input(string n, int r, string a) {
        name = n;
        roll = r;
        address = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Student s1, s2;

    s1.input("Anushrut", 1, "Kathmandu");
    s2.input("Ghimire", 2, "Chitwan");

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}