#include<iostream>
using namespace std;
int main()
{
    float marks[2][3]={55,58,89,56,93,42};
    int arr[2][4];

    // cout<<"size of array1 marks"<<sizeof(marks)<<"bytes"<<endl;
    //    cout<<"size of array1 marks"<<sizeof(arr)<<"bytes"<<endl;
    //        cout<<"size of array1 marks"<<sizeof(name)<<"bytes"<<endl;
     for(int  i=0;i<2;i++)
     {
       for(int j=0;j<4;j++)
       {
           cin>>arr[i][j];
       }
     }
   
}