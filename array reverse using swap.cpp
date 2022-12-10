#include <iostream>
using namespace std;

int main()
{
    cout << "Enter array size and elements : \n";
    int a;
    cin >> a;
    int arr[a], i;
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
    cout << "\n";
    for(i=0; i<a; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

