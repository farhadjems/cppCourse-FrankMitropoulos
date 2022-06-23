#include "accountUtil.h"
// utility helper functions for account class
void display(const std::vector<Account> &accounts)
{
    std::cout << "\n=====Accounts=====\n";
    for (auto &account : accounts)
    {
        std::cout << account << std::endl;
    }
}
void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=====Depositing to Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.deposit(amount))
        {
            std::cout << " Deposited " << amount << " to " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Deposit of " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n=====Withdrawing from Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << " Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Withdrawal of " << amount << " from " << account << std::endl;
        }
    }
}

// utility helper functions for savings account class
void display(const std::vector<SavingsAccount> &accounts)
{
    std::cout << "\n=====Savings Accounts=====\n";
    for (auto &account : accounts)
    {
        std::cout << account << std::endl;
    }
}
void deposit(std::vector<SavingsAccount> &accounts, double amount)
{
    std::cout << "\n=====Depositing to Savings Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.deposit(amount))
        {
            std::cout << " Deposited " << amount << " to " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Deposit of " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<SavingsAccount> &accounts, double amount)
{
    std::cout << "\n=====Withdrawing from Savings Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << " Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Withdrawal of " << amount << " from " << account << std::endl;
        }
    }
}

// utility helper functions for trust account class
void display(const std::vector<TrustAccount> &accounts)
{
    std::cout << "\n=====Trust Accounts=====\n";
    for (auto &account : accounts)
    {
        std::cout << account << std::endl;
    }
}
void deposit(std::vector<TrustAccount> &accounts, double amount)
{
    std::cout << "\n=====Depositing to Trust Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.deposit(amount))
        {
            std::cout << " Deposited " << amount << " to " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Deposit of " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<TrustAccount> &accounts, double amount)
{
    std::cout << "\n=====Withdrawing from Trust Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << " Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Withdrawal of " << amount << " from " << account << std::endl;
        }
    }
}

// utility helper functions for checking account class
void display(const std::vector<CheckingAccount> &accounts)
{
    std::cout << "\n=====Checking Accounts=====\n";
    for (auto &account : accounts)
    {
        std::cout << account << std::endl;
    }
}
void deposit(std::vector<CheckingAccount> &accounts, double amount)
{
    std::cout << "\n=====Depositing to Checking Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.deposit(amount))
        {
            std::cout << " Deposited " << amount << " to " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Deposit of " << amount << " to " << account << std::endl;
        }
    }
}
void withdraw(std::vector<CheckingAccount> &accounts, double amount)
{
    std::cout << "\n=====Withdrawing from Checking Accounts=====\n";
    for (auto &account : accounts)
    {
        if (account.withdraw(amount))
        {
            std::cout << " Withdrew " << amount << " from " << account << std::endl;
        }
        else
        {
            std::cout << " Failed Withdrawal of " << amount << " from " << account << std::endl;
        }
    }
}
