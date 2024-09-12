#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //wap to swap values of vect1 and vect 2
    vector<int> vect1={1,2,3,4,5};
    vector<int> vect2={11,12,13,14,15};
    vect1.swap(vect2);
    for(auto n:vect1)
    {
        cout<<n<<"  "<<endl;
    }
    for(auto n:vect2)
    {
      cout<<n<<"  ";
    }

return 0;

}