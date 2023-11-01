#include <iostream>
using namespace std;

template <class t>
t threeGreater(t a, t b, t c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    if (c > b && c > b)
    {
        return c;
    }
}

int main()
{
    cout << threeGreater(2, 45, 1) << endl;
    cout << threeGreater(2.3, 1.2, 5.5) << endl;
    return 0;
}