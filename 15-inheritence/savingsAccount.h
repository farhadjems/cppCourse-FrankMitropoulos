#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "account.h"

class SavingsAccount : public Account
{

private:
    static constexpr const char *defaultName = "<unknown savings account>";
    static constexpr const double defaultBalance = 0.0;
    static constexpr const double defaultIntRate = 0.0;

protected:
    double intRate;

public:
    // Constructors
    SavingsAccount(std::string inputName = defaultName, double inputBalance = defaultBalance, double inputIntRate = defaultIntRate);

    // Methods
    bool deposit(double amount);
    // Inherits withdraw and detBalance methods

    // friend functions
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &object);
};

#endif