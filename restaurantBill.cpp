/* 
Restaurant Name
Name  Number
Sr.No   Itemname    Quantity    CGST    SGST     Price
1       Maggi          5                         100
2       
3
*/

#include <iostream>
using namespace std;

class Restaurant
{
    private:
    int cust_number;
    string cust_name; 

    public:

    string c_name;
    int c_num, quantity, cgst, sgst, total_amount, total_quantity, sub_total, tax_amt;

    Restaurant()
    {
        c_name = cust_name;
        c_num = cust_number;
    }
};

int main()
{
    string prod1, prod2, prod3, cname;
    int qty, cNum, opt, n = 1;

    cout << "enter customer name: ";
    cin >> cname;
    cout << "enter customer number: ";
    cin >> cNum;
    
    return 0;
}