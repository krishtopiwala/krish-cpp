#include <iostream>
using namespace std;

class Circle
{
    private:
    int radius;

    public:
    
    Circle(int r)
    {
        radius = r;
        float area = 3.14 * radius * radius;

        cout << "Area of Circle: " << area << endl;
    }
};

int main()
{
    int r1;
    cout << "enter radius: ";
    cin >> r1;
    Circle c1(r1);
    return 0;
}