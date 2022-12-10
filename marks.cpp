#include <iostream>
using namespace std;
int main()

{

float marks;
cout<<"enter marks of a subject: ";
cin>>marks;

if(marks>=90)
{
  cout<<"A+"<<endl;
}
else if(marks>=85)
{
  cout<<"A"<<endl;
}
else if(marks>=80)
{
  cout<<"B+"<<endl;
}
else
{
  cout<<"other grades below B+"<<endl;
}

return 0;
}

