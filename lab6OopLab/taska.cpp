#include <iostream>
#include <cstring>
using namespace std;
class BankAccount
{
private:
    int accountId;
    double balance;
    int numofTransacs;
    int *transactionHistory;

public:
    BankAccount(int id, double initialBalance, int *transactions, int numTrans) : accountId(id), balance(initialBalance), numofTransacs(numTrans)
    {
        transactionHistory = new int[numofTransacs];
        memcpy(transactionHistory, transactions, numofTransacs * sizeof(int));
    }

    BankAccount(const BankAccount &other) : accountId(other.accountId), balance(other.balance), numofTransacs(other.numofTransacs)
    {
        transactionHistory = new int[numofTransacs];
        memcpy(transactionHistory, other.transactionHistory, numofTransacs * sizeof(int));
    }

    ~BankAccount()
    {
        delete[] transactionHistory;
    }

    void display() const
    {
        cout << "Account ID: " << accountId << endl;
        cout << "Balance: Rs" << balance << endl;
        cout << "Transaction History: ";
        for (int i = 0; i < numofTransacs; ++i)
        {
            cout << transactionHistory[i] << " ";
        }
        cout << endl;
    }

    void updateTransactionHistory(int *newTransactions, int newNumTrans)
    {
        delete[] transactionHistory;
        numofTransacs = newNumTrans;
        transactionHistory = new int[numofTransacs];
        memcpy(transactionHistory, newTransactions, numofTransacs * sizeof(int));
    }
};
void dev()
{
    cout << "-----------------Developed by Muhammad Saim-----------------" << endl;
    cout << "-----------------ID: 23K-0708-------------------------------" << endl;
}
int main()
{
    dev();
    int transactions[] = {100, -50, 200, -100};
    int numofTransacs = sizeof(transactions) / sizeof(transactions[0]);

    BankAccount account1(12345, 1000.0, transactions, numofTransacs);

    BankAccount account2 = account1;

    cout << "Original Account:" << endl;
    account1.display();
    cout << endl;
    cout << "Copied Account:" << endl;
    account2.display();
    cout << endl;

    int newTransactions[] = {1050, -750, 1000};
    int newnumofTransacs = sizeof(newTransactions) / sizeof(newTransactions[0]);
    account1.updateTransactionHistory(newTransactions, newnumofTransacs);

    cout << "Original Account after update:" << endl;
    account1.display();

    return 0;
}
