#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "enter number1: ";
    cin >> num1;
    
    cout << "enter number2: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "Number1 is big";
    }
    else
    {
        cout << "Number2 is big";
    }
    return 0;
}