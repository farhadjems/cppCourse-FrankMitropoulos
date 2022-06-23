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

    // Destructors
    virtual ~SavingsAccount() = default;
    // Methods
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
};

#endif