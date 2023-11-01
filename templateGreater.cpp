#include <iostream>
using namespace std;

template <class t>
t greatestNum(t x, t y)
{
    return x > y ? x : y;
}

int main()
{
    cout << "Greatest Value " << greatestNum(12, 5) << endl;
    cout << "Greatest Value " << greatestNum(1.2, 0.5) << endl;
    return 0;
}