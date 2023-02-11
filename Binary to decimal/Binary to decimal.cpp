#include<iostream>
#include<cmath>
using namespace std;

int convert(int n)
{
    int dec=0;
    int rem;
    int i;

    while(n!=0)
    {
        rem=n%10;
        n/=10;
        dec+=rem* pow(2,i);
        ++i;
    }
    return dec;
}
int main()
{
    int n;
    cout<< "Enter a binary number: ";
    cin>> n;
    cout<< "After conversion the decimal is: "<< convert(n)<<endl;
}
