#include <iostream>
using namespace std;
int main()
//break in  nested loop
{   
    for(int i=1;i<3;i++)
    {
        for(int j=1;j<5;j++)
        {
            if(j==3)
            {
                break;
            }
            cout<<" i= "<<i<<"   j="<<j<<endl;
        }
    }
    return 0;
}