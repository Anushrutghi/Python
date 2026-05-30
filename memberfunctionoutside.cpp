#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int age;
        void display();
        void input();
};

void Student::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

void Student::input()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}

int main()
{
    Student s1;
    s1.input();
    s1.display();
    
    return 0;
}