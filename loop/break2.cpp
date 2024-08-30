#include <iostream>
using namespace std;
int main()
//break in  infinite loop
{   int num,total=0;
    while(1)
{
   
    cout<<"enter a number"<<'\n';
    cin>>num;
    
    if(num<0)
    {
        break;

    }
    total += num;
}
cout<<"total is"<<total;
    return 0;
}