#include <iostream>
using namespace std;
int main ( )
{
    int n, i, cnt= 0;
    cout << "Md. Tahsin Hasib" <<endl;
    cout << "22-46026-1" << endl;
   cout << endl << endl;

    cout << "Enter a number to check: ";
    cin >> n ;

    for ( i = 2 ; i < n ; i++ )
    {
        if ( n % i == 0 )
        {
            cnt++;
            break;
        }
    }

    if ( cnt == 0 )
    {
        cout << endl << n << " is a prime number." <<endl;
    }
    else
    {
        cout << endl << n << " is not a prime number." <<endl;
    }
    return 0;
}
