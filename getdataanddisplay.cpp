/* TODAY*/
#include<iostream>
using namespace std;

class Teacher
{
    public:
        string name;
        int id;
        
        void getdata();
        void display();
};

void Teacher::getdata()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter id: ";
    cin>>id;
}

void Teacher::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
}

int main()
{
    Teacher t1, t2;
    
    cout<<"Teacher 1 details:"<<endl;
    t1.getdata();
    t1.display();
    
    cout<<"\nTeacher 2 details:"<<endl;
    t2.getdata();
    t2.display();
    
    return 0;
}whoa