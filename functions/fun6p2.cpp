//function overloading part two
#include<iostream>
#include<string>
using namespace std;
void add(int,int);
void add(int);
void add(int,int,int);
int main()
{
    add(6,3);
    add(5);
    add(10,2,56);
    return 0;
}
void add(int a,int b)
{
  cout<<a+b<<endl;  
}
void add(int y)
{
    cout<<y<<endl;
}
void add(int m,int n,int l)
{
    cout<<l+m+n<<endl;
}