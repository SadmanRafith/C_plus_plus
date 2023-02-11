#include<iostream>
#include<cmath>
using namespace std;

int convert(int n)
{
    int j;
    int rem;
    int i=1;

    while(n!=00)
    {
        rem=n%2;
        n/=2;
        j+=rem*i;
        i*=10;
    }
    return j;
}

int main()
{
    int n;
    cout<< "Enter a decimal number: ";
    cin>>n;
    cout<< "After conversion the binary number is: "<<convert(n)<<endl;
}
