#include<iostream>
using namespace std;
int main()
{
    int money,partner_age;
    cout<<"enter money:";
    cin>>money;

    if(money>=1000)
    {
        cout<<"enter partner age:";
        cin>>partner_age;
        if(partner_age>21)
    
       {
          cout<<"let ud have wine";
       }
        else{
        cout<<"lets have coffee";
        }
    }
    else{
        if(money>500)
        {
            cout<<"coffee in ccd";
        }
        else{
            cout<<"coffee in normal shop";
        }
    }
    cout<<"lets go home";
return 0;
}