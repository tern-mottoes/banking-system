#ifndef BANKSYSTEM_H
#define BANKSYSTEM_H

#include "Account.h"

class BankSystem {
public:
    BankSystem();
    void run();

private:
    Account accounts[100];  // Array to hold accounts
    int numAccounts;        // Number of accounts in the bank

    void displayMenu();
    void createAccount();
    void deposit();
    void withdraw();
    void checkBalance();
};

#endif // BANKSYSTEM_H
