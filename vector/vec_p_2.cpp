#include<iostream>
#include<vector>
using namespace std;
int main()
{   int sum=0;
    vector<pair<int,int>> v={{1,2},{15,10},{5,-4}};
    for(int i=0;i<v.size();i++)
    {
        sum += v[i].second;
        cout<<sum;
    }  
 return 0;
}