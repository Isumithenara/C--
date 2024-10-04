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
      char new_c=key.at(position);
      encrypted_msg += new_c;
    }
    else
    {
        encrypted_msg += c;
    }
   
   }
    cout<<"Your MESSAGE IS>>>:    "<<encrypted_msg;
   
   
   
    cout<<"decrypting message...."<<endl;
    string decrypted_msg;
    for(char c:encrypted_msg)
   {
    size_t position=key.find(c);
    if(position != string::npos)
    {
      char new_c=alphabet.at(position);
      decrypted_msg += new_c;
    }
    else
    {
        decrypted_msg += c;
    }
   
   }
   cout<<endl<<"your decrypted message is::"<<decrypted_msg<<endl;
   return 0;
   
}