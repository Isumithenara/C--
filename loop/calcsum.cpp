#include<iostream>
using namespace std;
int main()
{
   /* int sum,num=0,i;
    do{
        cout<< "enter a number"<<endl;
        cin>>i;
        num++;
        sum=i+i;
    }while(num<5);*/


    int number,sum=0;
    do{sum=sum+number;
        cout<<"enter a number:";
        cin>>number;
        
    }while(number>=0);
    cout<<"the sum is"<<sum;


return 0;
}