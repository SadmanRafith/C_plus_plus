#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter a number: ";
cin>>num;

if((num%2) == 0)
{
cout<<"the given number "<<num<< " is even"<<endl;
}
else
{
cout<<"the given number "<<num<< " is odd"<<endl;
}
return 0;
}
