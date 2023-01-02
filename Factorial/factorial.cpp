#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    int FACT;
    FACT = factorial(5);
    
    cout << "\n";
    cout << "The ans is : " << FACT << "\n";

    cout << "\n";
    return 0;
}