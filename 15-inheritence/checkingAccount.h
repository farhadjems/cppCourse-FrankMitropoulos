#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "account.h"

class CheckingAccount : public Account
{
private:
    static constexpr const char *defaultName = "<unknown checking account>";
    static constexpr const double defaultBalance = 0.0;
    static constexpr const double fee = 1.5;

public:
    // Constructors
    CheckingAccount(std::string inputName = defaultName, double inputBalance = defaultBalance);

    // Methods
    bool withdraw(double amount);

    // friend functions
    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &object);
};

#endif