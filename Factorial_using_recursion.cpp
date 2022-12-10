#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()

{
    int FACT;
    FACT = factorial(5);
    
    cout<<"\nThe ans is : " << FACT <<endl;

    return 0;
}