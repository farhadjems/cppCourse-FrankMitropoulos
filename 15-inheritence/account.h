#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account
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

    // Methods
    bool deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;

    // friend functions
    friend std::ostream &operator<<(std::ostream &os, const Account &object);
};

#endif