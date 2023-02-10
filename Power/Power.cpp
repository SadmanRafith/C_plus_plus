#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num, num1, square;
    cout<< "Enter a number: ";
    cin>>num;
    cout<< "Enter the power: ";
    cin>> num1;
    square = pow(num,num1);
    cout<< square<<endl;
    
}
