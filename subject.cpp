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
    cout << "Percentage: " << percent;
}