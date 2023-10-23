#include <iostream>
using namespace std;

class Base {
    private:
    int a = 10;
    
    protected:
    int b = 20;

    public:
    int c = 30;
    int num1, num2;

    void setNum() {
        cout << "enter num1: ";
        cin >> num1;
        cout << "enter num2: ";
        cin >> num2;
    }
};

class Derived : public Base {
    public:

    void getter() {
        // cout << "The value of a is " << a; -> because it is declare as a private variable it is not accessible

        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c;
    }
    void calcAdd() {
        cout << "Addition of two numbers are " << num1 + num2 << endl;
    }
    void calcSub() {
        cout << "Subtraction of two numbers are " << num1 - num2 << endl;
    }
};

int main() {
    Derived d;
    d.setNum();
    d.getter();
    d.calcAdd();
    d.calcSub();
    return 0;
}