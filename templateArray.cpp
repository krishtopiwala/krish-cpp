#include <iostream>
using namespace std;

template <class t>
t sumArr(t a[])
{
    int i, sum = 0;

    for (i = 0; i < 3; i++)
    {
        sum = sum + a[i];
    }
}

int main()
{
    int sum;
    int a[3] = {5, 10, 20};

    sum = sumArr(a);
    cout << sum;
    return 0;
}