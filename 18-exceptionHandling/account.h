#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "printable.h"
#include "exceptionHandling.h"

#include <iostream>
#include <string>

class Account : public I_Printable
{
private:
    static constexpr const char *defaultName = "<unknown account>";
    static constexpr const double defaultBalance = 0.0;

protected:
    std::string name;
    double balance;

public:
    // Constructors
    Account(std::string inputName = defaultName, double inputBalance = defaultBalance);
    // Account (std::string inputName = "<unknown account>", double inputBalance = 0.0);

    // Destructors
    virtual ~Account() = default;

    // Methods
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    double getBalance() const;
    virtual void print(std::ostream &os) const override;
};

#endif