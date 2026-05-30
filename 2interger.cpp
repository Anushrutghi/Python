/* TOADY*/
#include<iostream>
using namespace std;

void whoisgreater(int a, int b)
{
    if(a>b)
        cout<<a<<" is greater than "<<b<<endl;
    else
        cout<<b<<" is greater than "<<a<<endl;
}

void whoisgreater(float a, float b)
{
    if(a>b)
        cout<<a<<" is greater than "<<b<<endl;
    else
        cout<<b<<" is greater than "<<a<<endl;
}

void whoisgreater(char a, char b)
{
    if(a>b)
        cout<<a<<" is greater than "<<b<<endl;
    else
        cout<<b<<" is greater than "<<a<<endl;
}

int main()
{
    int a=2 , b=3;
    float c=7.2 , d=2.9 ;
    char e='g' , f='e';
    whoisgreater(a,b);
    whoisgreater(c,d);
    whoisgreater(e,f);
    return 0;
}
