#include <iostream>
using namespace std;

int main()
{
    int a ;
    int sum = 0 ;

    cout << "Enter array size : ";
    cin >> a ;

    int arr[a];
    for (int i=0; i<a; i++) {
        cout << "Enter numbers : ";
        cin >> arr[i] ;
    }
    for (int i = 0; i<a; i++) {
            sum = sum + arr[i];
    }
    cout << "\nSummation is : " << sum;

    cout << "\n";
    return 0;
}