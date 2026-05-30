#include<iostream>
using namespace std;
int main()
{
    int *a=new int[5];
    int sum=0;
    cout<<"Enter 5 numbers "<<endl;
    for (int i=0 ; i<5 ;i++)
    {
        cin>>a[i];
        sum += a[i]; 
    }
    cout<<"Sum="<<sum<<endl;  
    delete a;
    return 0;
}