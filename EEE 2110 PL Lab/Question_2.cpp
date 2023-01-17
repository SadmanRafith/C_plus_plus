
#include<iostream>
using namespace std;
int main()
{
    cout << "--------------------------------------" << "\n";
    cout << "--------------- Menu -----------------" << "\n";
    cout << "Item Name                    Price" << "\n";
    cout << "-----------------            ---------" << "\n";
    cout << "Chicken Burger               290 BDT" << "\n";
    cout << "French Fries                 110 BDT" << "\n";
    cout << "Pizza                        330 BDT" << "\n";
    cout << "Soft Drinks                  40 BDT" << "\n";

    cout << "\n";

    int q1, q2, q3, q4;
    
    cout << "Enter the quantity for Chicken Burger: ";
    cin >> q1;

    cout << "Enter the quantity for French Fries  : ";
    cin >> q2;
    
    cout << "Enter the quantity for Pizza         : ";
    cin >> q3;
    
    cout << "Enter the quantity for Soft Drinks   : ";
    cin >> q4;

    cout << "\n";

    float total;
    total = ((q1*290) + (q2*110) + (q3*330) + (q4*40));
    cout << "The total cost of " << q1+q2+q3+q4 << " items without VAT and service charge: " << total << " BDT \n";

    cout << "The VAT on total is: " << (total*0.15) << " BDT and Service charge is: " << (total*0.1) << " BDT \n";

    float totalwithVat;
    totalwithVat = total + (total*0.15) + (total*0.1);
    cout << "The total cost of " << q1+q2+q3+q4 << " items with VAT and service charge   : " << totalwithVat << " BDT \n";


    return 0;
}