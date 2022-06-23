#include "savingsAccount.h"

SavingsAccount::SavingsAccount(std::string inputName, double inputBalance, double inputIntRate)
    : Account(inputName, inputBalance),
      intRate(inputIntRate)
{
    if (intRate < 0.0)
    {
        throw ExceptionHandling("\tThe Inserted Interest Rate is Negative, Account Creation Aborted...\n");
    }
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
