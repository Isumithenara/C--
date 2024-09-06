#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers(10);//declaration
   fill (numbers.begin(),numbers.end(),5);
   for(int i=0;i<numbers.size();i++)
   {
    cout<<numbers[i]<<endl;
   }
    //intializaton
    // numbers.push_back(2);
    // numbers.push_back(2);
    // numbers.push_back(2);
//     int value;
//     for(int i=0;i<3;i++)
//    {
//      cout<<"enter value";
//      cin>>value;
//      numbers.push_back(value);

//    }

    cout<<"size of numbers"<<numbers.size();
    cout<<"capacity"<<numbers.capacity();



    cout<<numbers[2];

return 0;
}