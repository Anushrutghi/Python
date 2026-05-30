#include<iostream>
using namespace std;
int main()
{
    int a;
    a=10;
    int &b=a;
    a=2;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
