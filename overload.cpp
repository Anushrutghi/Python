#include<iostream>
using namespace std;
void random(int a , int b)
{cout<<a<<endl<<b<<endl;}
void random(int a)
{cout<<a<<endl;}

int main(){
    random(5);
    random(5,10);
    return 0;
}