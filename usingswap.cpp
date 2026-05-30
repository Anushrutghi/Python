/* TOADY*/
#include<iostream>
using namespace std;

template <class anushrut>
void swapValues(anushrut &a, anushrut &b)
{
    anushrut temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    cout<<"Before swap  a= "<<a<<", b = "<<b<<endl;
    swapValues(a, b);
    cout<<"After swap  a= "<<a<<", b = "<<b<<endl<<endl;
    
    float c = 5.5, d = 3.2;
    cout<<"Before swap  c= "<<c<<", d = "<<d<<endl;
    swapValues(c, d);
    cout<<"After swap  c= "<<c<<", d = "<<d<<endl<<endl;
    
    char e = 'A', f = 'Z';
    cout<<"Before swap  e= "<<e<<", f = "<<f<<endl;
    swapValues(e, f);
    cout<<"After swap  e= "<<e<<", f = "<<f<<endl;
    
    return 0;
}
