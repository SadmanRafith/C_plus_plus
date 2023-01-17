//calculates the x raised to the power n

#include<iostream>
using namespace std;

int power(int, int);

int main()
{
    cout << "\n";

    int x, p;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of p: ";
    cin >> p;


    cout << "The x to the power p is: " << power(x,p) << "\n";

    cout << "\n";
    return 0;
}



int power(int x, int p){
    if(x > 0){
        int result = 1;
        for(int i=1; i<=p; i++){
            result = result * x;
        }
        return result;
    }
    else{
        cout << "Undefined result!" << "\n";
    }
}