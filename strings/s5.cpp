#include<iostream>
#include<string>
using namespace std;
int main()
{
    string full_name("isumithenara");
    string f_name={full_name,0,5};
    string l_name=full_name.substr(5,7);
    string  formatted_full_name=f_name+l_name;
    formatted_full_name.insert(5,"  ");
    cout<<formatted_full_name;

    return 0;
}