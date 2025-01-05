#include"implementation.h"
#include<iostream>
#include<string>
int main()
{
    Account account1;
    account1.set_balance(10000.0);
    std::cout<<account1.get_balance();
    return 0;
}
  