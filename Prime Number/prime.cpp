#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    int n;
    int i;
    int cnt= 0;

    cout << "Enter a number to check: ";
    cin >> n ;

    for(i=2; i<n; i++){
        if(n%i == 0){
            cnt++;
            break;
        }
    }

    if(cnt == 0){
        cout << n << " is a prime number." << "\n";
    }
    else{
        cout << n << " is not a prime number." << "\n";
    }

    cout << "\n";
    return 0;
}