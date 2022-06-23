#include <iostream>
#include <vector>
#include <string>

#include "account.h"
#include "savingsAccount.h"
#include "accountUtil.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});
    accounts.push_back(Account{"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings
    vector<SavingsAccount> savingAccounts;
    savingAccounts.push_back(SavingsAccount{});
    savingAccounts.push_back(SavingsAccount{"Superman"});
    savingAccounts.push_back(SavingsAccount{"Batman", 2000});
    savingAccounts.push_back(SavingsAccount{"Wonderwoman", 5000, 5.0});

    display(savingAccounts);
    deposit(savingAccounts, 1000);
    withdraw(savingAccounts, 2000);

    // Checking
    vector<CheckingAccount> checkingAccounts;
    checkingAccounts.push_back(CheckingAccount{});
    checkingAccounts.push_back(CheckingAccount{"Kirk"});
    checkingAccounts.push_back(CheckingAccount{"Spock", 2000});
    checkingAccounts.push_back(CheckingAccount{"Bones", 5000});

    display(checkingAccounts);
    deposit(checkingAccounts, 1000);
    withdraw(checkingAccounts, 2000);

    // Trust
    vector<TrustAccount> trustAccounts;
    trustAccounts.push_back(TrustAccount{});
    trustAccounts.push_back(TrustAccount{"Athos", 10000, 5.0});
    trustAccounts.push_back(TrustAccount{"Porthos", 20000, 4.0});
    trustAccounts.push_back(TrustAccount{"Aramis", 30000});

    display(trustAccounts);
    deposit(trustAccounts, 1000);
    withdraw(trustAccounts, 3000);

    for (int i = 0; i < 5; i++)
    {
        withdraw(trustAccounts, 1000);
    }

    return 0;
}