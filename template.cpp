#include <iostream>
using namespace std;

template <class t>
t sum(t x, t y)
{
    return x + y;
}

int main()
{
    cout << sum(5, 25) << endl;
    cout << sum(2.35, 2.5) << endl;
    return 0;
}