#include<iostream>
using namespace std;
int main()

    //const 
   // int n=5;
    //int roll_no[n];
//array memory allocated 60*4=240bytes
//[sizeof(double)];
//roll_no[60]

 /*while(n++<=10)
{
    int roll_no[n];
    cout<<"array size"<<n;
}
*/
/*
extern int a[];//declaration
int roll_no[];//definition
*/
{ 
    /*int roll_no[]={1,2,3,4,5};*/

     int roll_no[5];
     cout<<"enter the roll number";
     for (int i=0;i<5;i++)
     {
        cin>>roll_no[i];
     }
    return 0;
}