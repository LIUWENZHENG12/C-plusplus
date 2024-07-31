#include <iostream>
#include <string>

class BankAccount {
private:
    std::string owner;
    double balance;

public:
    // Constructor
    BankAccount(std::string ownerName, double initialBalance) 
        : owner(ownerName), balance(initialBalance) {}

    // Member functions
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << std::endl;
        } else {
            std::cout << "Invalid deposit amount" << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount" << std::endl;
        }
    }

    void displayInfo() const {
        std::cout << "Account owner: " << owner << std::endl;
        std::cout << "Current balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account("John Doe", 1000.0);
    
    account.displayInfo();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayInfo();

    return 0;
}
