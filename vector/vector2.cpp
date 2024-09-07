#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers={3,0,67,9,4};
 
 
 
 
 //   cout<<"element at index 0 is"<<numbers[0];
     //cout<<"element at index 0 is"<<numbers.back();
    // cout<<"element at index 0 is"<<numbers.at(10);
  //cout<<"element at index 0 is"<<numbers.front();
   numbers.at(1)=10;
     cout<<"element at index 0 is"<<numbers.at(1);
            return 0;

}