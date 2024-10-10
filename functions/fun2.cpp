//call by value
#include<iostream>
using namespace std;
void modifyNum(int);
int main()
{
    int a=5;
    cout<<"before calling function value of a is:"<<a<<endl;
    modifyNum(a);
    cout<<"after callinf fuction value of a is:"<<a<<endl;

}
void modifyNum(int a)
{
    a=50;
    cout<<"within modifyNum values of a is "<<a<<endl;

}