//default argument
#include<iostream>
#include<string>
using namespace std;
void greet(string name,string prefix="Mr.",string suffix="  ");
int main()
{
    greet("buddy");
    greet("rahul");
    greet("shrithi","ms.","kumari");

    return 0;
}
void greet(string name,string prefix,string suffix)
{
    cout<<"hi "<<prefix+" "+name+" "+suffix<<endl;
}
