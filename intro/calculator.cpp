#include<iostream>
using namespace std;
int main()
{
    int  n2,n1;
    char ch;
    cout<<"enter the first number";
    cin>>n1;
    cout<<"enter the second number";
    cin>>n2;
    cout<<"enter the operand";
    cin>>ch;

    switch(ch)
    {
        case '+':
        cout<<n1+n2;
        break;
        case '-':
        cout<<n1-n2;
        break;
        case '*':
        cout<<n1*n2;
        break;
        case '^':
        cout<<n1+n2;
        break;
        case '/':
        cout<<n1/n2;
        break;
        default:
        cout<<"pls input a correct operand";
        break;

    }
    return 0;
}