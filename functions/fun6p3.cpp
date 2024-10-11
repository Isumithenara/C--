//function overloading part 3
#include<iostream>
#include<string>
using namespace std;
void print();
int  print();//this wrong because only return type is wrong
int main()
{
    int x;
    print();
    x=print();
    cout<<x;
    return 0;
}
void print()
{
    cout<<"hi";
}
int print()
{
    int a=4;
    return a;
}
