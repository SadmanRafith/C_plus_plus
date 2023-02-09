#include<iostream>
using namespace std;

int main()
{
    int n;
    int factorial=1;

    cout<< "Enter a number: ";
    cin>>n;

    if(n<0)
        cout<< "Error! Negative number doesn't exist.";
        else
    {
        for(int i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }
        cout<< "-----------------------------------"<<endl;
        cout<< "Factorial of "<<n<< " is: "<<factorial<<endl;
    }
}

