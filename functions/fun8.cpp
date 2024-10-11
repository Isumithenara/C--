//fibonacci series
#include<iostream>
using namespace std;
void fib(int a);
int main()
{
   int n;
   cout<<"enter number of terms u want in fibonacci series: ";
   cin>>n;
   fib(n);
}
void fib(int a)
{
    int x=0;
   int  y=1;
   int nextterm;
   for (int i=1;i<=a;i++)
   {cout<<x<<" ";
    
    nextterm=x+y;
     x=y;y=nextterm;
   }
}