#include<iostream>
using namespace std;
int main()
{
    int money;
    cout<<"how much money you have?"<<endl;
    cin>>money;
    if (money>1000)
    {
     cout<<"money you have:"<<money<<endl;
     cout<<"lets have coffee in starbucks"<<endl;  
    }
    else if (money>700)
    {
     cout<<"money you have:"<<money<<endl;
     cout<<"lets have coffee in ccd"<<endl;
       
    }
    else if (money>500)
    {
     cout<<"money you have:"<<money<<endl;
     cout<<"lets have coffee in normal shop"<<endl;
       
    }
    else if (money>100)
    {
     cout<<"money you have:"<<money<<endl;
     cout<<"lets have chocalate milkshake"<<endl;
       
    }
    else
    {cout<<"money you have"<<money<<endl;
    cout<<"lets have some coffeee sachets"<<endl;
    }
    cout<<"lets go home"<<endl;

  return 0;  
}

