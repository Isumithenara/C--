#include<iostream>
using namespace std;

int main()
{
    //bool a=true;
    //bool b=false;
    //cout<<b<<endl;
       void *ptr;
       int x=10;

       bool p=45;
       ptr=&x;
       cout<<*(int*)ptr<<endl;
       cout<<p<<endl;
       /*float y=12;
       float z=true+x+false+y;
       cout<<z<<endl;
       cout<<sizeof(bool);
           
     if((x<y)==true)
     {
     cout<<"x is lesser than y"<<endl;
     }
     else{
     cout<<"y is lesser than x"<<endl;
      }*/
    return 0;

}
