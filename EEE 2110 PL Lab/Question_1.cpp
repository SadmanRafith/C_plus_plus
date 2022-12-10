
#include<iostream>
using namespace std;

int main()
{
    double F, C, K, R;

    cout << "Enter the Farenheit value: ";
    cin >> F;

    C = (5*(F-32))/9;
    K = ((F-32)*(5/9)) + 273.15;
    R = F + 459.67;

    cout << "---------------------------------------------" << "\n";
    cout << "  Unit                         Value" << "\n";
    cout << "------------------             --------------" << "\n";
    cout << "Celsius                        " << C << "\n";
    cout << "Farenheit                      " << F << "\n";
    cout << "Kelvin                         " << K << "\n";
    cout << "Rankune                        " << R << "\n";
    cout << "\n";
    return 0;
}