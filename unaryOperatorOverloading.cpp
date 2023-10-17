// Operator Overloading
//     --> Unary Operator Overloading

#include <iostream>
using namespace std;

class Cube
{
    int a, b, c;

    public:
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    int getVolume()
    {
        return a * b * c;
    }
    Cube operator++()
    {
        Cube preCube;
        preCube.a = ++a;
        preCube.b = ++b;
        preCube.c = ++c;

        return preCube;
    }
    Cube operator++(int)
    {
        Cube postCube;
        postCube.a = a++;
        postCube.b = b++;
        postCube.c = c++;

        return postCube;
    }
    Cube operator--()
    {
        Cube preDec;
        preDec.a = --a;
        preDec.b = --b;
        preDec.c = --c;        
    }
};

int main()
{
    Cube c1, c2;
    
    cout << endl;

    c1.setData(5, 5, 5);
    cout << "Volume of Cube for object c1 is " << c1.getVolume() << "\n"; 

    --c1;
    cout << "Aftre Pre Decrement Volume of Cube for object c1 is " << c1.getVolume() << endl;

    ++c1;
    cout << "After Pre Increment volume of cube for object c1 is " << c1.getVolume() << endl;

    c2.setData(10, 10, 10);
    cout << "\nVolume of Cube for object c2 is " << c2.getVolume() << endl;
    
    c2++;
    cout << "After Post Increment volume of cube for object c2 is " << c2.getVolume() << endl;
    
    return 0;
}