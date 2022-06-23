#include "savingsAccount.h"

SavingsAccount::SavingsAccount(std::string inputName, double inputBalance, double inputIntRate)
    : Account(inputName, inputBalance),
      intRate(inputIntRate)
{
}

bool SavingsAccount::withdraw(double amount)
{
    return (Account::withdraw(amount));
}

bool SavingsAccount::deposit(double amount)
{
    amount += amount * intRate / 100;
    return Account::deposit(amount);
}

void SavingsAccount::print(std::ostream &os) const
{
    os << "[Savings Account: " << name << ": " << balance << ", " << intRate << "%]";
}
