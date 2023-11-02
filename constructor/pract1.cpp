#include <iostream>
using namespace std;

class Employee
{
    public:

    string name; 

    Employee(string nm);
};

Employee :: Employee(string nm)
{
    name = nm;
    cout << "Your name is: " << name << endl;
}

int main()
{
    Employee e1("Vasudev");
    return 0;
}