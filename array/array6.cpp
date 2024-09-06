#include<iostream>
using namespace std;
int main()
{   int nums[5]={2,2,5,5,1};
    int  ans =0;
     for(int i=0;i<10;i++)
     {
      ans=  ans ^ nums[i];
     }
     cout<<ans;
      return 0;
}