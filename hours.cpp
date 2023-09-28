#include <iostream>
using namespace std;

int main()
{
    int second, minutes, hours, totalSeconds;

    cout << "enter second: ";
    cin >> second;

    totalSeconds = second;

    hours = second / 3600;
    second = second % 3600;

    minutes = second / 60;
    second = second % 60;

    cout << "Total Seconds " << totalSeconds << endl;
    cout << "Hours " << hours << endl;
    cout << "Minutes " << minutes << endl;
    cout << "Second " << second;

    return 0;
}