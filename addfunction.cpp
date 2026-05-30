#include<iostream>
using namespace std;
int main()
{
    int *a=new int;
    int *b=new int;
    *a=5;
    *b=10;
   { cout<<*a+*b<<endl;}
    delete a;
    delete b;
    return 0;
}