#include <iostream>
using namespace std;
int main()
//break in simple loop
{   for(int i=1;i<=10;i++)
{
    if(i==7)
    {
        break;
    }
    cout<<i<<'\n';
}
    return 0;
}