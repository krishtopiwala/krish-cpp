// Operator Overloading

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

    // Operator Overloading for addition

    Box operator+(Box &n)
    {
        Box t;
        t.l = l + n.l;
        t.w = w + n.w;
        t.h = h + n.h;
        return t;
    }
    // Operator Overloading for multiplication

    Box operator*(Box &p)
    {
        Box bx;
        bx.l = l * p.l;
        bx.w = w * p.w;
        bx.h = h * p.h;
        return bx;
    }

    // Operator Overloading for Division
    
    Box operator/(Box &o)
    {
        Box q;
        q.l = l / o.l;
        q.w = w / o.w;
        q.h = h / o.h;
        return q;
    }
};

int main()
{
    Box b1, b2, b3, b4, b5;

    b1.setData(2, 2, 2);
    cout << "Volume of Box b1 is: " << b1.getVolume() << endl;

    b2.setData(3, 3, 3);
    cout << "Volume of Box b2 is: " << b2.getVolume() << endl;

    b3 = b1 + b2;
    cout << "Volume of Box b3 is: " << b3.getVolume() << endl;

    b4 = b3 * b1;
    cout << "Value for Box b4 is: " << b4.getVolume() << "\n";

    b5 = b4 / b3;
    cout << "Value for Box b5 is: " << b5.getVolume() << "\n";

    return 0;
}