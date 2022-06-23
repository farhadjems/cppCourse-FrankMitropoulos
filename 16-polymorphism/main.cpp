#include <iostream>
#include <vector>
#include <string>

#include "printable.h"
#include "account.h"
#include "savingsAccount.h"
#include "trustAccount.h"
#include "checkingAccount.h"
#include "accountUtil.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // Using Polymorphism

    CheckingAccount frank{"Frank", 5000};
    cout << frank << endl;

    Account *pa = new Account("Farhad", 1000);
    Account *ps = new SavingsAccount("Farzad", 1000, 5.0);
    Account *pc = new CheckingAccount("Mom", 1000.0);
    Account *pt = new TrustAccount("Dad", 1000.0, 5.0);

    vector<Account *> accounts{pa, ps, pc, pt};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 500);

    delete pa;
    delete ps;
    delete pc;
    delete pt;

    return 0;
}