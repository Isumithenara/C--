//call by reference
#include<iostream>
using namespace std;


//pointer(c) or reference{address} variable{like a nick name}(c++)
// void modifyNum(int &);
// int main()
// {
//     int a=5;
//     cout<<"before calling function value of a is:"<<a<<endl;
//     modifyNum(a);
//     cout<<"after callinf fuction value of a is:"<<a<<endl;

// }
// void modifyNum(int &x)
// {
//     x=50;
//     cout<<"within modifyNum values of x is "<<x<<endl;

// }

//reference variable
 int main()
 {
    int a=5;
    int &b=a;
    cout<<b;
    a=56;
    cout<<b;
    cout<<"address of a:"<<&a<<endl;
    cout<<"address of b:"<<&b;
    return 0;
 }



