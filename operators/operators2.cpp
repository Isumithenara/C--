#include<iostream>
using namespace std;
int main()
{
    /* cast operators
       float x=6.78;
       cout<<(int)x<<endl;
       cout<<x<<endl;*/


    /*conditional operator
       int a=3,b=2;
       cout<<"maximum is:"<<((a>b)?(a+2):b)<<endl;
     */

    //assignment operator
    /*int a=6;
    a+=2;
    cout<<a<<endl;
    cout<<sizeof(a);
    a-=1;
    cout<<a<<endl;*/

    //operator precedence and associativity
    /*int a=10, b=5,c=8,d=4, y;
    y=a/b^c*a%(c+d)<<d-2;
    cout<<y<<endl;*/

    int x=5;
    cout<<x++ + ++x +1 + --x + x--<<endl;
    cout<<x<<endl;

   /* int x=3,y;
    y=x++ + ++x;
    cout<<"x="<<endl<<"y="<<y<<endl;
*/
   /*int x=1,y=2,z;
    z=  x++++x - + ++x;
    cout<<"x="<<endl<<"y="<<endl<<z<<endl;*/

   /*int x=10,y=2,z;
    z= x-- - x++ + --y - ++y + --x - y-- + ++x - y++;
    cout<<"x="<<endl<<"y="<<y<<endl<<z<<endl;*/

  /*int y=3;
  int z=(--y)*(y=10);
  cout<<z;*/
    return 0;



}


