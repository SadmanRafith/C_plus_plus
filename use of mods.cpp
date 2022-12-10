#include <iostream>
using namespace std;

int main()
{
int n1 = 10;
int n2 = 5;
int n3 = 17;
int n4 = 4;
float r;

r = n1+n2;
cout<<"n1+n2: (15)"<<r<<endl;
r = n1-n2;
cout<<"n1-n2: (5)"<<r<<endl;
r = n1-n2+n3;
cout<<"n1-n2+n3: (22)"<<r<<endl;
r = n1*n2;
cout<<"n1*n2: (50)"<<r<<endl;
r = n1/n2;
cout<<"n1/n2: (2)"<<r<<endl;

r =(float) n3/n2;                                            //use of type cast operator
cout<<"n3/n2: (3.4)"<<r<<endl;

r = n3%n2;                                                   //use of mods
cout<<"n3%n2: (2)"<<r<<endl;

r = n4%n2;
cout<<"n4%n2: (4)"<<r<<endl;

return 0;
}
