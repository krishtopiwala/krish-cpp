#include <iostream>
using namespace std;

class Base1 {
    protected:
    int a;

    public:
    void setA() {
        cout << "enter a: ";
        cin >> a;
    }
};

class Derived1 : public Base1 {
    protected:
    int b;

    public:

    void setB() {
        cout << "enter b: ";
        cin >> b;
    }

    void Addition() {
        cout << "Addition of a and b is " << a + b << endl;
    }
};

class Derived2 : public Base1 {
    protected:
    int c;

    public:

    void setC() {
        cout << "enter c: ";
        cin >> c;
    }

    void Product() {
        cout << "Product of a and b is " << a * c << endl;
    }
};

int main() {
    Derived1 d1;
    d1.setA();
    d1.setB();
    d1.Addition();

    Derived2 d2;
    d2.setA();
    d2.setC();
    d2.Product();
    
    return 0;
}