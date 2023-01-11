#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    int a;

    cout << "Enter array size: ";
    cin >> a;

    int arr[a];
    int i;

    //input
    cout << "Enter elements: ";
    for(i=0; i<a; i++){
        cin >> arr[i];
    }

    int s=0;
    int e=a-1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    cout << "Reversed Array: ";
    for(i=0; i<a; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}