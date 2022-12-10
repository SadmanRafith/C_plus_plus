#include<iostream>
using namespace std;
int main ( )
{
    int a;
    cin >> a;
    int arr[a];
    for(int i=0; i<a; i++){
        cin >> arr[i];
    }
    for(int j=a-1; j>=0; j--){
        cout << arr[j] << " ";
    }


    return 0;

}

