#include<iostream>
using namespace std;
void print_list(const string[],int);
void clear_list(string[],int);
int main()
{
    string speakers_list[]={"HARINI","JENNY","ANURA"};
    int speakers_list_size=3;
    print_list(speakers_list,speakers_list_size);
    clear_list(speakers_list,speakers_list_size);
    print_list(speakers_list,speakers_list_size);
    
}
void print_list(const string s_list[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<s_list[i]<<" ";
    }
    cout<<endl;
    
}
void clear_list( string s_list[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<s_list[i]<<" ";
    }
    cout<<"list cleared";
    
}