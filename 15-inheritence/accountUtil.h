#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H

#include <vector>
#include "account.h"
#include "savingsAccount.h"
#include "checkingAccount.h"
#include "trustAccount.h"

// utility helper functions for account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// utility helper functions for savings account class

void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts, double amount);
void withdraw(std::vector<SavingsAccount> &accounts, double amount);

// utility helper functions for trust account class

void display(const std::vector<TrustAccount> &accounts);
void deposit(std::vector<TrustAccount> &accounts, double amount);
void withdraw(std::vector<TrustAccount> &accounts, double amount);

// utility helper functions for checking account class

void display(const std::vector<CheckingAccount> &accounts);
void deposit(std::vector<CheckingAccount> &accounts, double amount);
void withdraw(std::vector<CheckingAccount> &accounts, double amount);

#endif