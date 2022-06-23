#include "savingsAccount.h"

SavingsAccount::SavingsAccount(std::string inputName, double inputBalance, double inputIntRate)
    : Account(inputName, inputBalance),
      intRate(inputIntRate)
{
}

bool SavingsAccount::deposit(double amount)
{
    amount += amount * intRate / 100;
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &object)
{
    os << "[Savings Account: " << object.name << ": " << object.balance << ", " << object.intRate << "%]";
    return os;
}
