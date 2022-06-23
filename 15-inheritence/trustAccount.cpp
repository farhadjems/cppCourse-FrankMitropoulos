#include "trustAccount.h"

TrustAccount::TrustAccount(std::string inputName, double inputBalance, double inputIntRate)
    : SavingsAccount(inputName, inputBalance, inputIntRate),
      numberOfWithdraws{0}
{
}

bool TrustAccount::deposit(double amount)
{
    if (amount > depositTreshold)
    {
        amount += depositBonus;
    }
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount)
{
    if (numberOfWithdraws > maximumWithdrawals)
    {
        std::cout << " number of withdraws per year has been reached 3, aborting...\n";
        return false;
    }
    if (amount > maximumPercentWithdrawal * balance)
    {
        std::cout << " the withdrawal value is greater than 20% of balance, aborting...\n";
        return false;
    }
    numberOfWithdraws++;
    return SavingsAccount::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const TrustAccount &object)
{
    os << "[Trust Account: " << object.name << ", " << object.balance << ", " << object.intRate << "%, " << object.numberOfWithdraws << "]";
    return os;
}