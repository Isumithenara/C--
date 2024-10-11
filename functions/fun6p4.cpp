//function overloading part two
#include<iostream>
#include<string>
using namespace std;
void print(int);
void print(float);
void print(string);
int main()
{
    string str="jenny";
    print(10);
    print(10.2);//this is a double so write double
    print(str);
    return 0;
}
void print(int a)
{
    cout<<"print integer value"<<a<<endl;

}
void print(string str)
{
   cout<<"print string value"<<str<<endl;
 
}
void print(float b)
{
cout<<"print double value"<<b<<endl;
}