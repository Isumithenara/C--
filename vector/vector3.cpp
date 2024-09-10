#include <iostream>
#include <vector>
using namespace std;
int main()
{//begin and end
    // vector<int> v={2,3,5,6,23,5};
    // vector<int>:: iterator it;
    // for(it=v.begin();it != v.end(); it++)
    // {
    //     cout<<*it<<"  ";
    // }
//reverse begin and reverse end iterator   
    //  vector<int> v={2,3,5,6,23,5};
    // vector<int>:: reverse_iterator rit;
    // for(rit=v.rbegin();rit != v.rend(); rit++)
    // {
    //     cout<<*rit<<"  ";
    // }

    //size() max size capacity
    vector<char> vowels={'a','e','i','o'};
    cout<<"size of vector is "<<vowels.size()<<endl;
     cout<<" max size of vector is "<<vowels.max_size()<<endl;
     cout<<"capacity of vector is "<<vowels.capacity()<<endl;
    vowels.push_back('u');
    cout<<"size of vector is "<<vowels.size()<<endl;
     cout<<" max size of vector is "<<vowels.max_size()<<endl;
     cout<<"capacity of vector is "<<vowels.capacity()<<endl;
    vowels.resize(3);
    for(int i=0;i<vowels.size();i++)
    {
        cout<<vowels.at(i)<<" ";
    }
    return 0;
}