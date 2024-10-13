#include<iostream>
using namespace std;
void print_array(const int[],int);
void set_array(int[],int);
int main()
{
    int arr[]={1,2,3,4,5};
    int size=(sizeof(arr)/sizeof(int));
    //arr stores the address of the 1st element,it is like a pointer
    print_array(arr,size);//passed the array to function
    set_array(arr,size);
    print_array(arr,size);
}
void print_array(const int a[],int size)//argument is arr,and name
{
    //cout<<sizeof(a)<<endl;
    for(int i=0;i<size;i++)
    {
      cout<<a[i]<<"  ";
    }
}
    void set_array(int a[],int size)
    {
        for(int i = 0;i<size; i++)
        {
         a[i]=a[i]+5;
        }
    }

