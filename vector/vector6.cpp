#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //wap to sort vect1
    vector<int> vect1={10,2,-1,4,79,60};
    sort(vect1.begin(),vect1.end());
   for (auto n: vect1)
   {
    cout<<n<<" ";
   }
   
}