#include<iostream>
#include<string>
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

void Account ::deposit(double money)
{
    balance+= money;
}
void Account ::withdraw(double amount)
{
    balance+= amount;

}
int main()
{
    Account account1;
    account1.set_balance(10000.0);
    std::cout<<account1.get_balance();
    return 0;
}