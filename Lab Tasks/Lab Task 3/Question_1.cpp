#include <iostream>
using namespace std;
int main ( )
{
    int a, b, i, sum = 0;
    cout << "Md. Tahsin Hasib" << endl;
    cout << "22-46026-1" << endl;
    cout << "\n\n";
    cout << "Input two integer number : " ;
    cin >> a >> b;

    if ( a > b )
    {
        for ( i = b ; i <= a ; i++ )
        {
            if ( i % 2 == 0 )
            {
                sum = sum + i;
            }
        }
    }
    if ( b > a )
    {
        for ( i = a ; i <= b ; i++ )
        {
            if ( i % 2 == 0 )
            {
                sum = sum + i;
            }
        }
    }
    cout << "Summation of even numbers between these two numbers : "<< sum;
    return 0;
}
