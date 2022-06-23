#ifndef PRINTABLE_H
#define PRINTABLE_H

#include <iostream>

class I_Printable
{
public:
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &object);
    virtual void print(std::ostream &os) const = 0;
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual ~I_Printable() = default;
};

#endif
