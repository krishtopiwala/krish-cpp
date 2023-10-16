#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "Both (" << x << "," << y << ") lies in the first quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Both (" << x << "," << y << ") lies in the second quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Both (" << x << "," << y << ") lies in the third quadrant";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Both (" << x << "," << y << ") lies in the fourth quadrant";
    }
    else if (x == 0 && y == 0)
    {
        cout << "Both (" << x << "," << y << ") lies in the base line";
    }
    return 0;
}