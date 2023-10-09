#include <iostream>
using namespace std;

class BankAccount
{
    private:
    float totalBalance;

    public:
    float balance;

    BankAccount()
    {
        totalBalance = balance;
        cout << "enter current balance amount: ";
        cin >> totalBalance;
    }

    void deposit()
    {
        float amount;
        cout << "enter amount to be deposited: ";
        cin >> amount;

        totalBalance = totalBalance + amount;
        cout << "Current Balance: " << totalBalance << endl;
    }
};

int main()
{
    int n = 1, option;

    cout << "-------------------------------------------------------------------";
    cout << "Welcome to ABC Bank\n";
    cout << " ** INSTRUCTIONS ** \n";

    BankAccount ba;
    cout << "enter 1 -> DEPOSIT\n";
    cout << "enter 2 -> WITHDRAW\n";
    cout << "enter 3 -> EXIT\n";
    cout << "enter: ";
    cin >> option;
    
    while (n > 0)
    {

        if (option == 1)
        {
            ba.deposit();
        }
    }

    return 0;
}