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
     
    //  vector<char> vowels={'a','e','i','o'};
    // vector<int> v;

    // v.resize(10,50);
    // v.reserve(100);
    // if(v.empty())
    // {
    //     cout<<"no element in vector"<<endl;
    // }
    //    for(int i=0;i<v.size();i++)
    // {
    // cout<<v.at(i)<<" ";
    // }
    //  cout<<"size of vector is "<<v.size()<<endl;
    //  cout<<" max size of vector is "<<v.max_size()<<endl;
    //  cout<<"capacity of vector is "<<v.capacity()<<endl;
    // v.shrink_to_fit();
    //  cout<<"capacity of vector after shrink to fit is "<<v.capacity()<<endl;
  

    // cout<<"size of vector is "<<vowels.size()<<endl;
    //  cout<<" max size of vector is "<<vowels.max_size()<<endl;
    //  cout<<"capacity of vector is "<<vowels.capacity()<<endl;
    // vowels.push_back('u');
    // cout<<"size of vector is "<<vowels.size()<<endl;
    //  cout<<" max size of vector is "<<vowels.max_size()<<endl;
    //  cout<<"capacity of vector is "<<vowels.capacity()<<endl;
    // vowels.resize(3);
    // for(int i=0;i<vowels.size();i++)
    // {
    //     cout<<vowels.at(i)<<" ";
    //  }

  //modifiers
//    vector<int> v;
//    int val;  
//    do{
//     cout<<"enter element(0 to exit);";
//     cin>>val;
//     v.push_back(val);

//    }while(val);
//     cout<<"vector elements before pop back are:";
//    for(int i=0;i<v.size();i++)
//    {
//     cout<<v[i]<<"  ";
//    }
//     return 0;
//    v.pop_back();
//    v.pop_back();
//    cout<<"vector elements after pop back are:";
//    for(int i=0;i<v.size();i++)
//    {
//     cout<<v[i]<<"  ";
//    }

vector<int> v={1,2,4,5,6,0,98};
// v.erase(v.begin()+3);
v.erase(v.begin(),v.begin()+2);
 cout<<"vector elements after insertion are:";
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<"  ";
}

// vector<int>:: iterator it;
// it=v.begin()+2;
// v.insert(it,10,80);
// cout<<"vector elements after insertion are:";
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<"  ";
// }
// v.clear();
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<"  ";
// }







    return 0;
}