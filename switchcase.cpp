#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch+2)
    {
    case 1:
         cout<<"i wanna know my balance. ";
        break;
    case 2:
         cout<<"i wanna register a complaint. ";
        break;
    case 4:
         cout<<"i wanna talk to customer care executive. ";
        break;
    case 5:
         cout<<"i wanna talk to dialog tv center. ";
        break;
    case 9:
         cout<<"i wanna talk to wifi center. ";
        break;
    default:
         cout<<"DEAR SIR/MADAM ,PLS ENTER A VALID CHOICE. ";
        break;                     
    }
    return 0;
}
