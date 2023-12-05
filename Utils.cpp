#include "Utils.h"

int Utils::getAccountNumber() {
    int accountNumber;
    std::cout << "Enter account number: ";
    std::cin >> accountNumber;
    return accountNumber;
}

double Utils::getAmount() {
    double amount;
    std::cout << "Enter amount: $";
    std::cin >> amount;
    return amount;
}
