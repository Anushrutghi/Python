#include<iostream>
using namespace std;

class anushrut
{
    public:
        string name;
        
        anushrut()
        {
            cout<<"Constructor called - Object created"<<endl;
        }
        
        void display()
        {
            cout<<"Hello from Demo class"<<endl;
        }
        
        ~anushrut()
        {
            cout<<"Destructor called - Object destroyed"<<endl;
        }
};

int main()
{
    cout<<"Creating object d1:"<<endl;
    anushrut a1;
    a1.display();
    
    cout<<"\nCreating object d2:"<<endl;
    anushrut a2;
    a2.display();
    
    cout<<"\nProgram ending..."<<endl;
    return 0;
}