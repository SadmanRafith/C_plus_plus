#include <iostream>
using namespace std;
int main ( )
{
    
    int a, i, sum;
    float avg;
    cout << "\nEnter the number of people : ";
    cin >> a;

    int arr[a];
    for ( i=0; i<a; i++){
        cout << "Enter age : ";
        cin >> arr[i];
    }
    for ( i=0; i<a; i++){
        sum += arr[i];
    }
    avg = (float) sum/a;
    cout << "\n\n";

    cout << "Average age is : " << avg << endl;

    if( sum%2 == 0 ){
        cout << "Total age of the 5 people are even." << endl;
    }
    else{
        cout << "\nTotal age of the 5 people are odd." << endl;
    }


    return 0;
}

