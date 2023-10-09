#include <iostream>
using namespace std;

class Demo
{
    private:
    int balance;

    public:

    int amt, totalBalance;

    Demo(int bal)
    {
        balance = bal;
    }
    int deposit()
    {
        cout << "enter amount to be deposited: ";
        cin >> amt;

        balance = balance + amt;
        cout << "Current Balance: " << balance << endl;

        return balance;
    }

    // int setTotalBalance()
    // {
    //     totalBalance = deposit();
    //     return totalBalance;
    // }

    void withdraw()
    {
        cout << "enter amount to be withdrawn: ";
        cin >> amt;

        balance = balance - amt;
        cout << "current balance: " << balance << endl;
    }
};

int main()
{
    Demo d(2000);
    int n = 1;
    // int tb = d.setTotalBalance();
    char action;


    while (n > 0)
    {
        cout << "deposit or withdraw: ";
        cin >> action;
        if (action == 'd')
        {
            d.deposit();
        }
        else if (action == 'w')
        {
            d.withdraw();
        }
        else
        {
            return 0;
        }
    }
    return 0;
}