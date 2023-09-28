#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout << "enter number1: ";
    cin >> num1;
    cout << "enter number2: ";
    cin >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "Number1: " << num1 << endl;
    cout << "Number2: " << num2;
}

// num1 = 5 num2 = 3
// num1 = 5 + 3 = 8
// num2 = 8 - 3 = 5
// num1 = 8 - 5 = 3