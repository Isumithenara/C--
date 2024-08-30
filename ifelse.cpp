#include<iostream>
using namespace std;
int main()
{
    int money,age;
    cout<<"how much money you have?";
    cin>>money;
     cout<<"whats your age?";
    cin>>age;
    cout<<"dear sir/madam welcome"<<endl;
    if((money>=1000)&&(age>10))
      {
        cout<<"AMOUNT OF MONEY YOU HAVE"<<money<<endl;
        cout<<"lets go to starbucks!!!"<<endl;
      }
      else
      {
        cout<<"AMOUNT OF MONEY YOU HAVE"<<money<<endl;
        cout<<"lets go to ccd!"<<endl;
      }
        cout<<"hope you enjoyed"<<endl;
        cout<<"lets go home";
     return 0;   
      
}   