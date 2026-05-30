#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:
    Student() {
        name = "NAME";
        roll = 0;
    }

    Student(string n, int r) {
        name = n;
        roll = r;
    }

    Student(Student &s) {
        name = s.name;
        roll = s.roll;
    }

    void display() {
        cout << name << " " << roll << endl;
    }
};

int main() {
    Student s1;
    Student s2("anu", 5);
    Student s3(s2);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}