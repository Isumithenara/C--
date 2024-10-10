#include<iostream>
#include<string>
using namespace std;
int sum(int,int,int=0);
int main()
{
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,5)<<endl;
    cout<<sum(3,4)<<endl;
}
int sum(int x,int y,int z)
{
    return x+y+z;

}