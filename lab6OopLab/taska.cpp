#include <iostream>
#include <cstring>

class BankAccount {
private:
    int accountId;
    double balance;
    int* transactionHistory;
    int numTransactions;

public:
    // Constructor
    BankAccount(int id, double initialBalance, int* transactions, int numTrans) : 
        accountId(id), balance(initialBalance), numTransactions(numTrans) {
        transactionHistory = new int[numTransactions];
        std::memcpy(transactionHistory, transactions, numTransactions * sizeof(int));
    }

    // Copy constructor
    BankAccount(const BankAccount& other) : 
        accountId(other.accountId), balance(other.balance), numTransactions(other.numTransactions) {
        transactionHistory = new int[numTransactions];
        std::memcpy(transactionHistory, other.transactionHistory, numTransactions * sizeof(int));
    }

    // Destructor
    ~BankAccount() {
        delete[] transactionHistory;
    }

    // Display function
    void display() const {
        std::cout << "Account ID: " << accountId << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
        std::cout << "Transaction History: ";
        for (int i = 0; i < numTransactions; ++i) {
            std::cout << transactionHistory[i] << " ";
        }
        std::cout << std::endl;
    }

    // Update transaction history function
    void updateTransactionHistory(int* newTransactions, int newNumTrans) {
        delete[] transactionHistory;
        numTransactions = newNumTrans;
        transactionHistory = new int[numTransactions];
        std::memcpy(transactionHistory, newTransactions, numTransactions * sizeof(int));
    }
};

int main() {
    // Initial transaction history
    int transactions[] = {100, -50, 200, -100};
    int numTransactions = sizeof(transactions) / sizeof(transactions[0]);

    // Create a BankAccount object with initial account details and transaction history
    BankAccount account1(12345, 1000.0, transactions, numTransactions);

    // Create a copy of the original account
    BankAccount account2 = account1;

    // Display details of both original and copied accounts
    std::cout << "Original Account:" << std::endl;
    account1.display();
    std::cout << std::endl;
    std::cout << "Copied Account:" << std::endl;
    account2.display();
    std::cout << std::endl;

    // Update transaction history of the original account
    int newTransactions[] = {150, -75, 300};
    int newNumTransactions = sizeof(newTransactions) / sizeof(newTransactions[0]);
    account1.updateTransactionHistory(newTransactions, newNumTransactions);

    // Display the updated original account
    std::cout << "Original Account after update:" << std::endl;
    account1.display();

    return 0;
}
