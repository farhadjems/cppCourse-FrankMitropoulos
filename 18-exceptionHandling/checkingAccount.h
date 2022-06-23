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

    // Destructors
    virtual ~CheckingAccount() = default;

    // Methods
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    // friend functions
    virtual void print(std::ostream &os) const override;
};

#endif