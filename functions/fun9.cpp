#include<iostream>
using namespace std;
bool isPRIME(int a)
{
   for (int i = 0; i <= (a/2); i++)
   {
    if (a%i==0)
    {
        return false;
    }
    
   }
   return true;
   
}
int main()
{ 
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isPRIME(i)==true)
        {
            cout<<i<<endl;
        }
    }
}