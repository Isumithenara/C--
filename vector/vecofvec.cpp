#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v.push_back({27,36});
     v.push_back({4,8936});
    v.push_back({27,38,59,45});

    for(int i=0;i<v.size();i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<"     ";
        }
        cout<<endl;
    } 
    v.pop_back();
     v.push_back({27,36});
     v.push_back({4,8936});
    v.push_back({27,38,59,45});

    for(int i=0;i<v.size();i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<"     ";
        }
        cout<<endl;
    } 
    return 0;
}
