//Introduction to Object-Oriented Programming
//2. Class for Bank Account
//o Create a class BankAccount with data members like balance and member
//functions like deposit and withdraw. Implement encapsulation by keeping the
//data members private. o Objective: Understand encapsulation in classes.
#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance; // Private data member

public:
    // Constructor to initialize balance
    BankAccount() : balance(0) {}

    // Function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Function to check balance
    void checkBalance() const {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account; // Create a BankAccount object

    // Performing operations
    account.deposit(100.0);
    account.checkBalance();
    account.withdraw(30.0);
    account.checkBalance();
    account.withdraw(80.0); // Invalid withdrawal

    return 0;
}

