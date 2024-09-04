#include<iostream>
using namespace std;
int main()
{
    int arr[5],arr1[5],arr2[5];
    cout<<"enter first array elements";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
     cout<<"enter second array elements";
    for(int i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr[i]+arr1[i];
        cout<<"sum at index"<<i<<"is"<<arr2[i]<<endl;
    }

    

    return 0;
}