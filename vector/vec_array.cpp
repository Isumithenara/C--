#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v[3];
    // v[0].push_back(5);
    // v[0].push_back(11);
    // v[1].push_back(166);
    // v[1].push_back(78);
    // v[2].push_back(15);
    // v[2].push_back(144);
     for(int i=0;i<3;i++)
     {
        int n;
        cout<<"enter size of vector"<<i+1;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int a ;
            cin>>a;
            v[i].push_back(a);
        }
     }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
