#include<iostream>
#include<string>
using namespace std;
class Account
{
    private:
     //attributes
    string name;
    double balance;

    //methods
    public:
    void deposit(double amount) {balance += amount;}
    bool withdraw(double amount){ balance -= amount;}
    void display()
    {
        cout<<"the updated balance is:"<<balance;
    }
};
int main()
{
    Account Thenara_account;
    //Thenara_account.name="Isumi Thenara";
    // Thenara_account.balance=5000.0;

    Thenara_account.deposit(1000.50);
    Thenara_account.display();
    // Thenara_account.withdraw(500.20);

   // account with the help of pointer
   //Account *Thenara_account=new Account();//pointer to the object
//    (*Thenara_account).name="Isumi thenara";
//    (*Thenara_account).balance=5000.0;
//    (*Thenara_account).deposit(1000.0);
//    (*Thenara_account).withdraw(200);
   //  Thenara_account->name="isumi thenara";.
}