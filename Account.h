#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account();
    void createAccount(int accountNumber, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;

private:
    int accountNumber;
    double balance;
};

#endif // ACCOUNT_H
