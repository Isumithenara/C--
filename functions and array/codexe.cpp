#include<iostream>
using namespace std;
int min_element(int[],int);
int max_element(int[],int);
int main()
{
   int arr[]={34,-78,0,1,56};
   int smallestelement;
   int largestelement;
   int size=sizeof(arr)/sizeof(int);
   smallestelement=min_element(arr,size);
   largestelement=max_element(arr,size);
   cout<<smallestelement<<endl;
   cout<<largestelement;
   min_element(arr,size);
   max_element(arr,size);
   return 0;
}
int min_element(int a[],int size)
{
   int smallest=a[0];
   for(int i=0;i<size;i++)
   {
    if(a[i]<smallest)
    {
     smallest=a[i];   
    }
   }
   return smallest;
}
int max_element(int b[],int size)
{
   int largest=b[0];
   for(int i=0;i<size;i++)
   {
    if(b[i]>largest)
    {
     largest=b[i];   
    }
   }
   return largest;

}