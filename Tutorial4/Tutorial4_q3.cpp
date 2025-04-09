#include <iostream>
using namespace std;
class Account
{
private:
    int balance;

public:
    Account(int b)
    {
        if (b < 0)
        {
            cout << "Error: The initial balance is invalid." << endl;
            balance = 0;
        }
        else
        {
            balance = b;
        }
    }

    void credit(int amount)
    {
        if (amount < 0)
        {
            cout << "Error: The amount to credit is invalid." << endl;
        }
        else
        {
            balance += amount;
        }
    }

    void debit(int amount)
    {
        if (amount < 0)
        {
            cout << "Error: The amount to debit is invalid." << endl;
        }
        else if (amount > balance)
        {
            cout << "Error: Debit amount exceeded account balance." << endl;
        }
        else
        {
            balance -= amount;
        }
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Account account1(1000);
    cout << "Initial balance of account1: " << account1.getBalance() << endl;
    account1.credit(500);
    cout << "Balance after crediting 500: " << account1.getBalance() << endl;
    account1.debit(200);
    cout << "Balance after debiting 200: " << account1.getBalance() << endl;
    cout << "Attempting to debit 2000..." << endl;
    account1.debit(2000);
    cout << endl;

    cout << "Initial balance of account2: " << -200 << endl;
    Account account2(-200);
    cout << "Current balance of account2: " << account2.getBalance() << endl;
    cout << "Attempting to credit -100..." << endl;
    account2.credit(-100);
    cout << "Attempting to debit -50..." << endl;
    account2.debit(-50);

    return 0;
}
