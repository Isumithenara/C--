#include<iostream>
#include<list>
using namespace std;
class youtubechannel
{
    public:
    string Name;
    int subscriberscount;
    string OwnerName;
    list<string> publishedvideotitles;

    //class constructor
    youtubechannel(string name,string ownerName)
    {
      Name=name;
      OwnerName=ownerName;
      subscriberscount=0;
    }
    //class method
    void GetInfo() 
    {
    cout<<"name:" <<Name<<endl;
    cout<<"ownername:" <<OwnerName<<endl;
    cout<<"subscriberscount:"<<subscriberscount<<endl;
    cout<<"videos"<<endl;
    for(string videotitles:publishedvideotitles)
    {
     cout<<videotitles<<endl;
    }
    }
   
};
int main()
{
    youtubechannel ytchannel("AI world","Isumi");
    ytchannel.publishedvideotitles.push_back("what is artificial intelligence");
    ytchannel.publishedvideotitles.push_back("history of AI");
    ytchannel.publishedvideotitles.push_back("lesson 1 of AI");
    youtubechannel ytchannel2("maths al","thenara");


   ytchannel.GetInfo();
   ytchannel2.GetInfo();



    // cout<<"name:" <<ytchannel2.Name<<endl;
    // cout<<"ownername:" <<ytchannel2.OwnerName<<endl;
    // cout<<"subscriberscount:"<<ytchannel2.subscriberscount<<endl;
    // cout<<"videos"<<endl;
    // for(string videotitles:ytchannel2.publishedvideotitles)
    // {
    //  cout<<videotitles<<endl;
    // }

    return 0;//system("pause>0")
}