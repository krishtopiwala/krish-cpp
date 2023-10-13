#include <iostream>
using namespace std;

class Restaurant
{
    public:
    int quantity, price[3], value;
    int n = 1, option;
    string cust_name, pname, cust_number;
    string product_name[3];

    void setBill()
    {
        product_name[0] = "Pizza";
        product_name[1] = "Burger";
        product_name[2] = "Butter";

        price[0] = 250;
        price[1] = 100;
        price[2] = 500;

        cout << "enter customer name: ";
        cin >> cust_name;
        cout << "enter mobile number: ";
        cin >> cust_number;

        if (cust_number.length() != 10)
        {
            cout << "enter mobile number: ";
            cin >> cust_number;
        }

        cout << "ORDER" << endl;
        cout << "Pizza - Rs.250\n" << "Burger - Rs.100\n" << "Butter - Rs.500\n"; 
        cout << "enter 0 to proceed further\n";
        
        while (n > 0)
        {
            cout << "enter 1 -> Pizza\n" << "enter 2 -> Burger\n" << "enter 3 -> Butter\n";
            cin >> option;
            if (option == 1)
            {
                cout << "enter quantity: ";
                cin >> quantity;
                pname += "Pizza";
                value = price[0];
            }
            else if (option == 2)
            {
                pname += "Burger";
                value = price[1];
            }
            // else if (option == 3)
            // {
            //     pname += "Butter";
            //     value += price[2];
            // }
            else if (option == 0)
            {
                n = 0;
            }
        }
        float sub_total = quantity * value;
        float cgst = (sub_total * 0.025);
        float sgst = (sub_total * 0.025);
        float total_amount = sub_total + cgst + sgst;

        cout << "Name\tItem\tQty.\tPrice\tTotal\n";
        cout << cust_name << "\t" << pname << "\t" << quantity << "\t" << value << "\t" << sub_total << "\n";
        cout << "CGST@2.5 " << cgst << endl;
        cout << "SGST@2.5 " << sgst << endl;
        cout << "Grand Total " << total_amount << endl; 
    }
};

int main()
{
    Restaurant res;
    cout << "=============================================================\n";
    res.setBill();
    return 0;
}