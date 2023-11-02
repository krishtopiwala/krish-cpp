#include <iostream>
using namespace std;

class Solid
{
    private:
    float radius;
    int base, height;

    public:
    

    Solid(float r, int b, int h)
    {
        radius = r;
        base = b;
        height = h;
    }
    void area(float r)
    {
        float result = 3.14 * r * r;   
        cout<<result;
    }
    void area(int b,int h)
    {
        int result = 0.5 * b * h;
    }
};

int main()
{
    Solid S1(1.5,2,10);
    S1.area(10.8);
    S1.area(2, 5);
    return 0;
}