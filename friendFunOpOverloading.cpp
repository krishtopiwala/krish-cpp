// friend function using operator overloading

#include <iostream>
using namespace std;

class Box
{
    int l, w, h;

    public:
    void setData(int a, int b, int c)
    {
        l = a;
        w = b;
        h = c;
    }
    int getVolume()
    {
        return l * w * h;
    }

    friend Box operator+(Box m, Box n)
    {
        Box t;
        t.l = m.l + n.l;
        t.w = m.w + n.w;
        t.h = m.h + n.h;
        return t;
    }

    friend Box operator-(Box p, Box q)
    {
        Box bt;
        bt.l = p.l - q.l;
        bt.w = p.w - q.w;
        bt.h = p.h - q.h;
        return bt;
    }

    friend Box operator++(Box o)
    {
        Box t;
        t.l = ++o.l;
        t.w = ++o.w;
        t.h = ++o.h;
        return t;
    }
};

int main()
{
    Box b1, b2, b3, b4, b5;

    b1.setData(2, 2, 2);
    cout << "Volume of Box for b1 is " << b1.getVolume() << endl;

    b2.setData(4, 4, 4);
    cout << "Volume of Box for b2 is " << b2.getVolume() << endl;

    b3 = b1 + b2;
    cout << "Volume of Box for b3 is " << b3.getVolume() << endl;

    b5 = b3 - b2;
    cout << "Volume of Box for b5 is " << b5.getVolume() << endl;

    b4 = ++b3;
    cout << "Increment after b3 is " << b4.getVolume() << endl;

    return 0;
}