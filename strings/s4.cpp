//practice f member functions
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string v="Thena's practice session";
    string :: iterator h;
    for(h=v.begin();h != v.end();h++)
    {
        cout<<*h;
    }
    cout<<endl;
    cout<<v.substr(8,5)<<endl;
    cout<<v.find("prain",2);
//     v +="  do it well";
//     v.append(" do it well ");
//      for(h=v.begin();h != v.end();h++)
//     {
//         cout<<*h;
//     }
//    cout<<endl;
//     cout<<"size of string v is"<<v.size()<<endl;
//     cout<<"length of string v is"<<v.length()<<endl;
//     cout<<"Max size of string v is"<<v.max_size()<<endl;
//     cout<<"capacity of string v is"<<v.capacity()<<endl;

    return 0;
}