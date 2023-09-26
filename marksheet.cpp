#include <iostream>
using namespace std;

int main()
{
    int maths, guj, eng, total, percent;

    cout << "enter marks of maths: ";
    cin >> maths;
    cout << "enter marks of gujarati: ";
    cin >> guj;
    cout << "enter marks of english: ";
    cin >> eng;

    total = maths + guj + eng;
    percent = (total * 0.3);

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percent << endl;

    if (percent > 75 && percent <= 99)
    {
        cout << "A";
    }
    else if (percent > 60 && percent <= 75)
    {
        cout << "B";
    }
    else if (percent > 45 && percent <= 60)
    {
        cout << "C";
    }
    else if (percent > 35 && percent <= 45)
    {
        cout << "D";
    }
    else if (percent <= 35)
    {
        cout << "Fail";
    }

    return 0;
}