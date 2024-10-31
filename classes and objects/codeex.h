#include<iostream>
#include<string>
class Instructor
{
   public:
     std::string name;
     int exp;
     void display()
     {
        std::cout<<"Hi myself"<<name<<"having experince of"<<exp<<"years";
     }

};
