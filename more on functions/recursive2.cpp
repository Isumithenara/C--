#include<iostream>
using namespace std;
unsigned long long fibnacci(unsigned long n )
{   if (n<=1)
{
    return n;
}

    return fibnacci(n-1)+fibnacci(n-2);
}
int main()
{
    cout<<fibnacci(6);
    return 0;
}