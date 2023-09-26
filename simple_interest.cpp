#include <iostream>
using namespace std;

int main()
{
    float p, r, n, si;

    cout << "enter principal amount: ";
    cin >> p;
    cout << "enter rate of interest: ";
    cin >> r;
    cout << "enter number of years: ";
    cin >> n;

    si = (p * r * n) / 100;
    cout << "SIMPLE INTEREST " << si; 
    return 0;
}