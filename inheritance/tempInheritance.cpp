#include <iostream>
using namespace std;

class Base {
    private:
    int a = 10;
    
    protected:
    int b = 20;

    public:
    int c = 30;
};

class Derived : public Base {
    public:

    void getter() {
        // cout << "The value of a is " << a; -> because it is declare as a private variable it is not accessible

        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c;
    }
};

int main() {
    Derived d;
    d.getter();
    return 0;
}