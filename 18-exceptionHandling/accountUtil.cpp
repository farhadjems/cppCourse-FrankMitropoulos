#include "accountUtil.h"

void display(const std::vector<Account *> &accounts)
{
    std::cout << "\n=====Accounts=====\n";
    for (auto account : accounts)
    {
        std::cout << *account << std::endl;
    }
}
void deposit(std::vector<Account *> &accounts, double amount)
{
    std::cout << "\n=====Depositing to Accounts=====\n";
    for (auto account : accounts)
    {
        if (account->deposit(amount))
        {
            std::cout << " Deposited " << amount << " to " << *account << std::endl;
        }
        else
        {
            std::cout << " Failed Deposit of " << amount << " to " << *account << std::endl;
        }
    }
}
void withdraw(std::vector<Account *> &accounts, double amount)
{
    std::cout << "\n=====Withdrawing from Accounts=====\n";
    for (auto account : accounts)
    {
        if (account->withdraw(amount))
        {
            std::cout << " Withdrew " << amount << " from " << *account << std::endl;
        }
        else
        {
            std::cout << " Failed Withdrawal of " << amount << " from " << *account << std::endl;
        }
    }
}
