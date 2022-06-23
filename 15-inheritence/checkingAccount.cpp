#include "checkingAccount.h"

CheckingAccount::CheckingAccount(std::string inputName, double inputBalance)
    : Account(inputName, inputBalance)
{
}

bool CheckingAccount::withdraw(double amount)
{
    amount += fee;
    return Account::withdraw(amount);
}

// friend functions
std::ostream &operator<<(std::ostream &os, const CheckingAccount &object)
{
    os << "[Checking Account: " << object.name << ": " << object.balance << ", " << object.fee << "]";
    return os;
}