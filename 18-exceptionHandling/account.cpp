#include "account.h"

#include <iostream>
#include <string>

Account::Account(std::string inputName, double inputBalance)
    // Account (std::string inputName = "<unknown account>", double inputBalance = 0.0);
    : name(inputName),
      balance(inputBalance)
{
    if (balance < 0.0)
    {
        throw ExceptionHandling("\tInserted Balance Is Negative, Account Creation Aborted...\n ");
    }
}

// Methods
bool Account::deposit(double amount)
{
    if (amount < 0)
    {
        throw ExceptionHandling("\tthe inserted amount is negative, aborting...\n");
    }

    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (amount < 0)
    {
        throw ExceptionHandling("\tthe inserted amount is negative, aborting...\n");
    }
    if (amount > balance)
    {
        throw ExceptionHandling("\tthe inserted amount is greater than the balance, aborting...\n");
    }

    balance -= amount;
    return true;
}

double Account::getBalance() const
{
    return balance;
}

void Account::print(std::ostream &os) const
{
    os << "[Account: " << name << ": " << balance << "]";
}