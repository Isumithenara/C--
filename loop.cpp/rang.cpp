#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num={3,6,15,17,18,21,55,100,200,300};
   int count=0;
    for(auto n:num)
    {
        if(n %5==0 || n %3==0);
        count++;
    }
    cout<<count;
    return 0;
}