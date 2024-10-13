#include<iostream>
using namespace std;
void print_array(int[]);
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<(sizeof(arr)/sizeof(int))<<endl;

    print_array(arr);
}
void print_array(int a[])
{
    cout<<sizeof(a)<<endl;
}