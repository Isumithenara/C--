#include<iostream>
#include<list>
using namespace std;
class myclass
{
    public:
    string name;
    int noofstudents;
    string classteachername;
   
    list<string> studentnames;
    };



int main()
{
    myclass lotus;
    lotus.classteachername="manel";
    lotus.name="lotus";
    lotus.noofstudents=35;
    lotus.studentnames={"lala,lily,buddy"};

    cout<<"classteacher name:" <<lotus.classteachername<<endl;
    cout<<"class name:" <<lotus.name<<endl;
    cout<<"class students name:"<<endl;
    for(string nameofthestudent: lotus.studentnames)
    {
    cout<<nameofthestudent<<endl;
    }
    cout<<" no .ofstudents:" <<lotus.noofstudents<<endl;

    return 0;//system("pause>0")
}