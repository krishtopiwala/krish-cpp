#include <iostream>
using namespace std;

class Base {
    protected:
    int n;

    public:

    void setN() {
        cout << "enter n: ";
        cin >> n;
    }
};

class FactorialNumber : public Base {
    protected:
    int fact = 1;

    public:

    void calc() {
        for (int i = n; i >= 1; i--) {
            fact = fact * i;
        }
        cout << "Factorial: " << fact << endl << endl;
    }
};

class NumberTable : public Base {
    public:

    void printTable() {
        cout << "------------------------------------------------------------------------------------\n";
        for (int i = 1; i <= 10; i++) {
            cout << n << " * " << i << " = " << n * i << "\n";
        }
        cout << "------------------------------------------------------------------------------------\n";
    }
};

int main() {
    FactorialNumber ft;
    ft.setN();
    ft.calc();

    NumberTable nt;
    nt.setN();
    nt.printTable();

    return 0;
}