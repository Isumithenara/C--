#include<iostream>
#include<string>
using namespace std;
int main()
{  //acessing elements
    string p={"Isumi Thenara"};
    string c("serasinghege");
    //cout<<p[8];
   // cout<<p.at(17);
   for(int q:p)
   {
    cout<<q<<endl;
   }
//connect
  cout<<p+c<<endl;
  cout<<p+" "+c+"abc";
  cout<<"length of c is"<<c.size();
  cout<<(p==c)<<endl;
  cout<<(p<"isumi thenara");
  

    return 0;

}