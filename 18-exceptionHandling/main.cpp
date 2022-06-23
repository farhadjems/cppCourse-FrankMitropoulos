#include <iostream>
#include <vector>
#include <string>
#include <memory>

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

    unique_ptr<Account> moeAccount;
    unique_ptr<Account> larryAccount;

    try
    {
        larryAccount = make_unique<SavingsAccount>("Larry", -2000.0);
        cout << *larryAccount << endl;
    }

    catch (const ExceptionHandling &ex)
    {
        cerr << ex.what() << endl;
    }

    try
    {
        moeAccount = make_unique<SavingsAccount>("Moe", 1000);
        cout << *moeAccount << endl;
        moeAccount->withdraw(500);
        cout << *moeAccount << endl;
        moeAccount->withdraw(1000);
        cout << *moeAccount << endl;
    }

    catch (const ExceptionHandling &ex)
    {
        cerr << ex.what() << endl;
    }

    return 0;
}