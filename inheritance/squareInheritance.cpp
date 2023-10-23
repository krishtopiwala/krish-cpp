#include <iostream>
using namespace std;

class Root {
    protected:
    int n;

    public:
    void setNumber() {
        cout << "enter number till you want square root: ";
        cin >> n;
    }
};

class Square : public Root {
    public:
    void loopSquare() {
        for (int i = 1; i <= n; i++) {
            cout << i * i << " ";
        }
    }
};

int main() {
    Square sq;
    sq.setNumber();
    sq.loopSquare();
    return 0;
}