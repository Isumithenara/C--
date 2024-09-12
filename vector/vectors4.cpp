#include<iostream>
#include<vector>
using namespace std;
int main()
//wap to erase all the even numbers
{
   vector <int> v={1,2,3,4,5,6,7,8,9,10};
   vector <int> :: iterator it;
   it=v.begin();
   while(it != v.end())
   {
    if(*it%2==0)
    {
        v.erase(it);
    }
    else{
        it++;
    }
   }
   for(auto n: v)
   {
    cout<<n<<" ";
   }
   return 0;
}
