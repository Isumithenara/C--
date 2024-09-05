#include<iostream>
using namespace std;
int main()
{   int i=0,target=9;
    int num[4]={2,7,11,15};

    for(i=0;i<4;i++)
    {
       for(int j=0;j<4;j++)
       {
        if(target==(num[i]+num[j]))
        {
            cout<<i<<j<<endl;
        }
       }
    }
return 0;    
}