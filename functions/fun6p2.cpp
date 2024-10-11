//function overloading part two
#include<iostream>
#include<string>
using namespace std;
void add(int,int);
void add(int);
void add(int,int,int);
void add(double,int);
void add(int,double);
int main()
{
   add(6,3);
    add(5);
    add(10,2,56);
    add(20.3,3);
    add(3,20.3);

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
void add(double a,int h)
{
    cout<<a+h<<endl;
}
void add(int p,double h)
{
    cout<<p+h<<endl;
}