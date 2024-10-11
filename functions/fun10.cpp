#include<iostream>
using namespace std;
int area(int);
double area(double,double);
double area(double);
int main()
{
   int square_side,area_of_square;
   double length,width,area_of_rect;
   double radius,area_of_circle;
   
   cout<<"enter a side of a square:";
   cin>>square_side;
   area_of_square=area(square_side);
   cout<<"area of the suqare is:"<<area_of_square<<endl;
   
   cout<< "enter thelength and width of rectangle: ";
   cin>>length>>width;
   area_of_rect=area(length,width);
   cout<<"area of rectangle is:"<<area_of_rect<<endl;
   
   cout<<"enter radius of circle:";
   cin>>radius;
   area_of_circle=area(radius);
   cout<<"area of circle is :"<<area_of_circle<<endl;
  
   return 0;
}
int area(int side)
{
    return side*side;
}
double area(double l,double w)
{
    return l*w;  
}
double area(double r)
{
    double pi=3.14;
    return pi*r*r;
}
