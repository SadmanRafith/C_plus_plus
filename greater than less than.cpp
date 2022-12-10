#include <iostream>
using namespace std;
int main()
{

int num1, num2;
cout<<"Enter two numbers: ";
cin>>num1>>num2;

if(num1<=num2)
{
cout<<"if block"<<endl;
cout<<"\n" <<num1 <<" is equal to or less than "<< num2<<endl;
}
else
{
cout<<"else"<<endl;
cout<<num1<<" is greater than "<<num2<<endl;
}

return 0;
}

