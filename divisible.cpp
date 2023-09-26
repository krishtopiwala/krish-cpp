#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter number: ";
    cin >> n;

    if (n % 5 == 0 && n % 7 == 0)
    {
        cout << n << " is divisible by 5 and 7";
    }
    else
    {
        cout << n << " is not divisible by 5 and 7";
    }
    return 0;
}