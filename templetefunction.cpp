/* TOADY*/
#include<iostream>
using namespace std;
template <class anushrut>
void who(anushrut a)
{
    cout<<a<<endl;
}
int main()
{
    who(5);
    who(3);
    who("Hello");
    return 0;
}