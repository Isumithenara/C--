#include<iostream>
using namespace std;
int main()
{ int attendance,marks;
   cout<<"is the student present ,give 1 or 0";
    cin>>attendance;
    if(attendance=01)
    {
        cout<<"enter your marks";
        cin>>marks;

            if((marks<100)&&(marks>0))
            {
                if(marks>75)
                cout<<"A pass";
                {
                    if(marks>65)
                    cout<<"b pass";
                    {
                        if(marks>55)
                        cout<<"c pass";
                        {
                            if(marks<55)
                            cout<<"just pass";
                            {
                                if(marks<35)
                                cout<<"fail";
                            }
                        }
                    }
                }

            }
        
    }
    cout<<"if you are pass ,keepit up,or come next time,do better";
    return 0;
}
