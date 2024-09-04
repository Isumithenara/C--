#include<iostream>
using namespace std;
int main()
{   int oo;
    int arr[5]={0,5,6,54,699};
    cout<<"enter what you want"<<endl;
    cin>>oo;
    for(int i=0;i<5;i++)
    {
       if(oo==arr[i]+arr[i])
       {
        cout<<arr[i]<<endl;
       }
    }
return 0;    
}