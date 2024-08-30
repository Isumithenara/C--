#include <iostream>
using namespace std;
int main()
{char choice;
    do
    {
      float l,b,area=0;
      cout<<"enter the length and the breadth seperated by a space:";
      cin>>l>>b;
      area=l*b;
      cout<<"the area is"<<area<<endl;
      cout<<"want to calculate another(Y/N)";
    cin>>choice;

    } while (choice=='y'|| choice=='Y');
    cout<<"out of loop"<<endl;
    return 0;
    
}