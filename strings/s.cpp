#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char f_name[20];
    char l_name[20];
    char full_name[50];
   // cout<<f_name;

//     cout<<"enter yout first name";
//    cin>> f_name;
//    cout<<"enter your last name";
//    cin>>l_name;
//    cout<<"hi"<<f_name<<"your first name has"<<
//    strlen(f_name)<<"characters"<<endl<<
//    "and your last name has"<<strlen(l_name)<<"characters."<<endl;
//     strcpy(full_name,f_name);
//     strcat(full_name,"  ");
//     strcat(full_name,l_name);
 
//  if((strcmp(f_name,l_name))==0)
//  {
//     cout<<"both string are equal";
//  }else
//  {
//     cout<<"not equal";
//  }
//  cout<<full_name;

cout<<"enter your full name";
 cin.getline( full_name,50);
 cout<<full_name;

 
return 0;
}