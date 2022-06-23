#include "checkingAccount.h"

CheckingAccount::CheckingAccount(std::string inputName, double inputBalance)
    : Account(inputName, inputBalance)
{
}

bool CheckingAccount::deposit(double amount)
{
    return (Account::deposit(amount));
}

bool CheckingAccount::withdraw(double amount)
{
    amount += fee;
    return Account::withdraw(amount);
}

// friend functions
void CheckingAccount::print(std::ostream &os) const
{
    os << "[Checking Account: " << name << ": " << balance << ", " << fee << "]";
}