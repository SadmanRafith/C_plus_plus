#include<iostream>
using namespace std;

int main()
{
    int num, num1;
    cout<< "Enter the number to check: ";
    cin>>num;
    if(num==0)cout<< "The number is neutral"<<endl;
    else if(num>0)cout<< "The number is positive"<< endl;
        else cout<< "The number is negative"<< endl;
}
