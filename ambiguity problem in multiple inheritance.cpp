#include <iostream>
using namespace std;

class Base1
{
public:
    void hello(){cout<<"hello there from base1!"<<endl;}
};
class Base2
{
    public:
    void hello(){cout<<"hello there from base2!"<<endl;}
};

class Child: public Base1, public Base2
{
public:
    void ownFunc(){cout<<"own"<<endl;}
};

int main()
{
   Child c1;
   c1.ownFunc();
   c1.Base1::hello();
   c1.Base2::hello();
   return 0;
}
