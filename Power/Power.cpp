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
    int digit[square],number;
    //defining a loop for splitting the number
    for(int i=0; i<sizeof square; i++)
    {
        digit[i]=number%10;
        number=number/10;
    }
    //for reading the digits stored in digits array
    cout <<"digits are"<<endl;
    for(int j=sizeof square-1 ; j>=0 ; j-- )
    {
        cout<<digit[j]<<", ";
    }
}
