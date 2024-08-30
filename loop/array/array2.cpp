#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"enter the roll no";
    for (int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<5;i++)
    {
    cout<<a[i]<<endl;
    
    }
   /* cout<<a<<endl;
    cout<<&a[0]<<endl;
     cout<<&a[1]<<endl;
      cout<<&a[2]<<endl;
       cout<<&a[3]<<endl;
        cout<<&a[4]<<endl;*/
    
    return 0;
    }