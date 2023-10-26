#include <iostream>
using namespace std;

class Base {
    protected:
    int n1;

    public:
    void setN1() {
        cout << "enter n1: ";
        cin >> n1;
    }
};

class Derived1 : public Base {
    protected:
    int n2;

    public:
    void setN2() {
        cout << "enter n2: ";
        cin >> n2;
    }
};

class Derived2 : public Derived1 {
    public:

    void Addition() {
        cout << "Addition of n1 and n2 is " << n1 + n2;
    }
};

class Test : public Derived1 {
    protected:
    int n3;

    public:

    void setN3() {
        cout << "enter n3 ";
        cin >> n3;
    }

    void Multiply() {
        cout << "Multiplication of n1, n2 and n3 is " << n1 * n2 * n3;
    }
};

int main() {
    Test t;
    t.setN1();
    t.setN2();
    t.setN3();
    t.Multiply();

    cout << endl;

    Derived2 d2;
    d2.setN1();
    d2.setN2();
    d2.Addition();
    return 0;
}