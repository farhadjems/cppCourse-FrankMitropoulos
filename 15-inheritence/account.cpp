#include "account.h"

#include <iostream>
#include <string>

Account::Account(std::string inputName, double inputBalance)
    // Account (std::string inputName = "<unknown account>", double inputBalance = 0.0);
    : name(inputName),
      balance(inputBalance)
{
}

// Methods
bool Account::deposit(double amount)
{
    if (amount < 0)
    {
        std::cout << " the inserted amount is negative, aborting...\n";
        return false;
    }

    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (amount < 0)
    {
        std::cout << " the inserted amount is negative, aborting...\n";
        return false;
    }
    if (amount > balance)
    {
        std::cout << " the inserted amount is greater than the balance, aborting...\n";
        return false;
    }
    balance -= amount;
    return true;
}

double Account::getBalance() const
{
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &object)
{
    os << "[Account: " << object.name << ": " << object.balance << "]";
    return os;
}