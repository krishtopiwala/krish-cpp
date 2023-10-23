#include <iostream>
using namespace std;

class Student {
    protected:
    string stud_name;
    int account, statistics, oc, economics;
    
    public:
    void setMarks() {
        cout << "enter marks of account: ";
        cin >> account;
        cout << "enter marks of statistics: ";
        cin >> statistics;
        cout << "enter marks of oc: ";
        cin >> oc;
        cout << "enter marks of economics: ";
        cin >> economics;
    }

    void setName() {
        cout << "enter student name: ";
        cin >> stud_name;
    }
};

class Result : public Student {
    protected:
    int total, percent;

    public:

    void calculate() {
        total = account + statistics + oc + economics;
        percent = (total * 0.4);
    }

    void getData() {
        cout << "Name\tAccount\tStat\tOC\tEconomics\tTotal\tPercentage" << endl;
        cout << stud_name << "\t" << account << "\t" << statistics << "\t" << oc << "\t" << economics << "\t\t" << total << "\t" << percent;  
    }
};

int main() {
    Result res;
    res.setName();
    res.setMarks();
    res.calculate();
    res.getData();
    return 0;
}