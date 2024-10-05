//defining  function
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int a,b,sum=0;
   // cout<<"enter a b values";
   // cin>>a>>b;
    sum=a+b;
    cout<<sum;
    return a+b;//optional
}
int main()
{
  sum(3,4);
  return 0;
}

void display(std::string name)
{
    cout<<"hi"<<name;
}