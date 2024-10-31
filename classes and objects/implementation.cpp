
#include<iostream>
#include<string>
#include"implementation.h"

void Account ::deposit(double money)
{
    balance+= money;
}
void Account ::withdraw(double amount)
{
    balance+= amount;

}
#include"implementation.h"

int main()
{
    Account account1;
    account1.set_balance(10000.0);
    std::cout<<account1.get_balance();
    return 0;
}
  