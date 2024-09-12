#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,string> p(23,"thena");
    pair<int,string> pA;
    pA=make_pair(2007,"Ishu");
   
   cout<<(p==pA)<<endl;
    cout<<(p!=pA)<<endl;
     cout<<(p<pA)<<endl;
      cout<<(p>pA)<<endl;
       cout<<(p<=pA)<<endl;
        cout<<(p>=pA)<<endl;
    // p.swap(pA);
    // cout<<p.first<<"   "<<p.second<<endl;
    // cout<<pA.first<<"   "<<pA.second<<endl;
    

//    auto p3=make_pair("Ishu",2007);
//    cout<<p3.first<<"   "<<p3.second<<endl; 
//    cout<<pA.first<<"   "<<pA.second<<endl;

//    pair<int,float> p4(p);
// cout<<p4.first<<"   "<<p4.second<<endl;
   
//    pair<bool,string> p5;
//    p5.first=true;
//    p5.second="buddy";
//    cout<<p5.first<<"   "<<p5.second<<endl;
  
 return 0;

}
//for swaping data types should be same in general