#include <iostream>
using namespace std;
int main()
{  int opt,a,b,sum=0,sub=0,mul=0,divv=0;
    do
    {
       cout<<"***********************"
       <<endl<<"1.addition"
       <<'\n'<<"2.subtraction"
       <<"\n" <<"3.multiplication"
       <<'\n'<<"4.division"
       <<"\n"<<"q.quit"
       <<endl;
       cout<<"enter your choice"<<endl;
       cin>>opt;
      
      if(opt=='1')
      {
         cout<<"you choosed  "<<opt;
         cout<<"enter two numbers with space";
        cin>>a>>b;
        sum=a+b;
      }
       else if(opt=='2')
      { cout<<"you choosed  "<<opt;
       cout<<"enter two numbers with space";
        cin>>a>>b;
        sub=a-b;
      }
       else if(opt=='3')
      { cout<<"you choosed  "<<opt;
       cout<<"enter two numbers with space";
        cin>>a>>b;
        mul=a*b; 

      }
       else if(opt=='4')
      {
        cout<<"you choosed  "<<opt;
        cout<<"enter two numbers with space";
        cin>>a>>b;
        divv=a/b;
      }
      else if(opt=='q'|| opt=='Q')
      {
        cout<<"good bye";
      }
      else 
      {
        cout<<"wrong choice"<<endl;
      }
    } while (opt!='q' && opt!='Q');
    return 0;
    
}