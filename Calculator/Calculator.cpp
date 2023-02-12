#include <iostream>

using namespace std;

int main()
{
    char op;
    int num1,num2,c;

    cout<< "Enter two numbers:";
    cin>>num1>>num2;
    cout<< "Enter the operand: ";
    cin>>op;
    cout<< "*************************\n";
    cout<< "Calculation: ";

    if(op=='+')
    {
        c= num1+num2;
         cout<<c<<endl;

    }
    else if(op=='-')
    {
        c= num1-num2;
         cout<<c<<endl;

    }
    else if(op=='*')
    {
        c= num1*num2;
         cout<<c<<endl;
    }
    else if(op=='/')
    {
        c= num1/num2;
         cout<<c<<endl;
    }
    else
        cout<< "Error"<<endl;
        return 0;
}
