#include <iostream>
using namespace std;

class Student 
{
    private:
    int mark1, mark2;

    public:
    int id, m1, m2, total;
    string name;

    Student()
    {
        cout << "enter id of a student: ";
        cin >> id;
        cout << "enter name of a student: ";
        cin >> name;
        cout << "enter mark1: ";
        cin >> m1;
        cout << "enter mark2: ";
        cin >> m2;
        total = m1 + m2;
    }

    ~Student()
    {
        cout << endl;
        cout << "Student " << name << " object is being destructed" << endl;       
    }

    void showData()
    {
        cout << "\nStudent id is " << id;
        cout << "\nStudent name is " << name;
        cout << "\nEng\tMaths\tTotal";
        cout << "\n" << m1 << "\t" << m2 << "\t" << total;
        cout << endl;
    }
};

int main()
{
    Student s1, s2, s3, s4, s5;
    s1.showData();
    s2.showData();
    s3.showData();
    return 0;
}