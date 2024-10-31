#include<string>
#ifndef _ABC_H_
#define _ABC_H_
class Account
{   
    private:
    std::string name={"Isumi thenara"};
    double balance;
    public:
       void set_balance(double amount)
       {
        balance =amount;
       }
       int get_balance()
       {
        return balance;
       }
       void deposit(double amount);
       void withdraw(double amount);
};
#endif 