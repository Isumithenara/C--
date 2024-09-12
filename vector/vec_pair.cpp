#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,string>> studentdetails={{1,"ishu"},{2,"parami"}};
    for(int i=0;i<studentdetails.size();i++)
    {
        cout<<studentdetails[i].first<<"  "<<studentdetails[i].second<<endl;
    }  
    studentdetails.push_back({3,"Manel"});
    for(int i=0;i<studentdetails.size();i++)
    {
        cout<<studentdetails[i].first<<"  "<<studentdetails[i].second<<endl;
    } 
    
    studentdetails.erase(studentdetails.begin()+1);
    for(int i=0;i<studentdetails.size();i++)
    {
        cout<<studentdetails.at(i).first<<"  "<<studentdetails.at(i).second<<endl;
    } 


    return 0;
}