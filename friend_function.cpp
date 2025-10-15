#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize private data
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Friend function declaration
    friend void displayAccountDetails(BankAccount acc);
};

// Friend function definition
void displayAccountDetails(BankAccount acc) {
    cout << "\n--- Bank Account Details (Accessed by Friend Function) ---" << endl;
    cout << "Account Number: " << acc.accountNumber << endl;
    cout << "Balance: ?" << acc.balance << endl;
}

int main() {
    BankAccount account1(101, 5000.50);

    // Calling friend function
    displayAccountDetails(account1);

    return 0;
}
