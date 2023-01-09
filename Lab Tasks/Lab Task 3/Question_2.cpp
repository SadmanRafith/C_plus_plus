#include <iostream>
using namespace std;
int main ( )
{
    int num1, num2, n1, n2, GCD, LCM, rem;
    cout << "Md. Tahsin Hasib" << endl;
    cout << "22-46026-1" << endl;
    cout << "\n\n";

    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    n1 = num1;
    n2 = num2;

    while ( n2 != 0 )
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    GCD = n1;
    LCM = (num1 * num2)/GCD;

    cout << "\nGCD is : " << GCD;
    cout << "\nLCM is : " << LCM;



    return 0;
}
