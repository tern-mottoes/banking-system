#include "BankSystem.h"
#include <iostream>

BankSystem::BankSystem() : numAccounts(0) {}

void BankSystem::run() {
    int choice;
    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                std::cout << "Exiting the system. Thank you!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);
}

void BankSystem::displayMenu() {
    std::cout << "\nBanking System Menu\n";
    std::cout << "1. Create Account\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Check Balance\n";
    std::cout << "5. Exit\n";
}
