//function overloading
#include<iostream>
#include<string>
using namespace std;
void display(int);
void display(double);
void display(string);
int main()
{
   display(3);
   display(25.33);
   display("buddy");
}
void display(int a)
{
    cout<<"print integer value :"<<a<<endl;
}
void display(double y)
{
    cout<<"print decimal value:"<<y<<endl;
}
void display(string str)
{
    cout<<"string"<<str<<endl;
}
