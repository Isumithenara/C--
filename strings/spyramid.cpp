#include<iostream>
#include<string>
using namespace std;
int main()
{
    string letters;
    cout<<"lets create a pyramid"<<endl;
    cout<<"ENTER THE STRING :" <<endl;
    getline(cin,letters);
    int len=letters.length();
    int position=0;
    
    for(char c:letters)
    {
        int spaces=len-(position+1);
        while(spaces>0)//to print spaces
        {
            cout<<" ";
            --spaces;
        }
        for (int i=0;i<position;i++)//to print current character 
        {
            cout<<letters.at(i);
        }
        cout<<c;
        for(int i=position-1;i>=0;i--)//before character in reverse order
        {
            cout<<letters.at(i);
        }
        cout<<endl;
        position++;
    }


    return 0;

}