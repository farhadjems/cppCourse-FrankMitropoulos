#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "savingsAccount.h"

class TrustAccount : public SavingsAccount
{
private:
    static constexpr const char *defaultName = "<unknown trust account>";
    static constexpr const double defaultBalance = 0.0;
    static constexpr const double defaultIntRate = 0.0;
    static constexpr const double depositTreshold = 5000.0;
    static constexpr const double depositBonus = 50.0;
    static constexpr const int maximumWithdrawals = 3;
    static constexpr const double maximumPercentWithdrawal = 0.2;

protected:
    int numberOfWithdraws = 0;

public:
    // Constructors
    TrustAccount(std::string inputName = defaultName, double inputBalance = defaultBalance, double inputIntRate = defaultIntRate);

    // Destructors
    virtual ~TrustAccount() = default;

    // Methods
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    // friend functions
    virtual void print(std::ostream &os) const override;
};

#endif
