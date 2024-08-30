#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    
    char ch='a';
    char et='2';
    char is='$#';
    char mn=2;
    char jj=32;
    char JJ=33;
    cout<<ch<<endl;
    cout<<(int)ch<<endl;
    cout<<et<<endl;
    cout<<is<<endl;
    cout<<(int)et<<endl; /*any  garbage value will be printed as 2 have un printable symbol in
     ascii table*/
    cout<<(int)is<<endl;
    cout<<(int)mn<<endl; 
    cout<<jj<<endl;
    cout<<JJ<<endl;

    char pp=123;
    char po=128;
    cout<<(int)po<<endl;
    cout<<(int)pp<<endl;

   

return 0;  
}