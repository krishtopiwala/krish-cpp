#include <iostream>
using namespace std;

int main()
{
    float area, radius;

    cout << "enter radius of circle: ";
    cin >> radius;

    area = 3.14 * radius * radius;
    
    cout << "Area of Circle " << area;
    
    return 0;
}