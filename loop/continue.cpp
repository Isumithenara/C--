#include <iostream>
using namespace std;
int main()
{   //skip seven
   int num,i=1,total=10;
   while(i<=10)
   {
    cout<<"enter a number:"<<endl;
    cin>>num;
    if(num<0)
    {
        continue;
    }
    total += num;
    i++;
   }
   cout<<total;

    return 0;
}