//finding factorial of a number
#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"enter number to find out factorial: ";
    cin>>n;
    cout<<fact(n);
    return 0;
}
int fact(int a)
{
    int factorial=1;
    if(a==0 || a==1)
     return 1;
    for (int i=2;i<=a;i++)
    {
        factorial=factorial*i;
    } 
    return factorial;

}