#include <iostream>
using namespace std;

class Test1 {
    public:
    int n1 = 1;
    int n2 = 1;
    int n3;
};

class Test2 : public Test1 {
    public:
    int n;

    void setNum() {
        cout << "enter n: ";
        cin >> n;
    }
};

class Derived : public Test2 {
    public:
    void getSeries() {
        for (int i = 1; i <= n; i++) {
            n3 = n1 + n2;
            cout << n1 << " ";
            n1 = n2;
            n2 = n3;
        }
    }
};

int main() {
    Derived dd;
    dd.setNum();
    dd.getSeries();
    return 0;
}