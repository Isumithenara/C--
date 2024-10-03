#include<iostream>
#include<string>
using namespace std;
int main()
//substitution cipher

{
   string encrypted_msg;
   string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
   string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
   string msg{};
   cout<< "HELLO THERE,ENTER YOUR MESSAGE";
   getline(cin,msg);
   cout<<endl<<"<<<....encrypting messge..<<<"<<endl;
   for(char c:msg)
   {
    size_t position=alphabet.find(c);
    if(position != string::npos)
    {
      char new_c=  key.at(position);
      encrypted_msg += c;
    }
    else
    {
        encrypted_msg += c;
    }
   
   }
    cout<<"ur msg is "<<encrypted_msg;
   return 0;
}