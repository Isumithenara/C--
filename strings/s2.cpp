#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    a={"Isumi"}; //or we can use() also
    string b{"thenara"};
    string c{b};
    string d(10,'s');
    cout<<a<<endl<<c<<endl<<d<<endl;
    string str1{a,3};
    string str2={"krish",3};
    cout<<str1<<endl<<str2<<endl;
    string user1;
    cout<<"enter your school name";
    //cin>>user1;
    getline(cin,user1);
    cout<<user1<<endl;
     
    return 0;
}