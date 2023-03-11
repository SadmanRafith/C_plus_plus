#include<iostream>
using namespace std;

int main ( )
{
    cout << "\n";
    int a;

    cout << "Enter size: ";
    cin >> a;

    int arr[a];
    
    //intput
    cout << "Enter elements: ";
    for(int i=0; i<a; i++){
        cin >> arr[i];
    }

    //output
    cout << "Reversed array: ";
    for(int j=a-1; j>=0; j--){
        cout << arr[j] << " ";
    }

    cout << "\n";
    return 0;
}
