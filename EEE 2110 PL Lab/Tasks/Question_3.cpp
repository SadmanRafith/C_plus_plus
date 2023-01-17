// wether is a square number

#include<iostream>
#include<math.h>
using namespace std;

int is_square(int);

int main()
{
    cout << "\n";

    int number;
    cout << "Please enter the integer number to check: ";
    cin >> number;

    is_square(number);

    cout << "\n";
    return 0;
}


int is_square(int n){
    for(int i=0; i<=9; i++){
        if(n>=0){
            int sr = sqrt(n);
            if((sr * sr) == n){
                cout << "The number has a square root! and that is " << sr << " * " << sr << " = " << n;
                return sr;
            }
            else{
                cout << "The number doesnt have a square root!";
                break;
            }
        }
    }
}