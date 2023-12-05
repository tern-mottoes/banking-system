#include "Account.h"

Account::Account() : accountNumber(0), balance(0.0) {}

void Account::createAccount(int accountNumber, double initialBalance) {
    this->accountNumber = accountNumber;
    this->balance = initialBalance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        // Handle insufficient funds
    }
}

double Account::getBalance() const {
    return balance;
}
