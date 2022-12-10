#include <iostream>
using namespace std;

class Test
{
    static int x;
    int a, b;
public:

    Test()
    {
        cout<<"Default/empty constructor"<<endl;
    }
    Test(int p, int q)
    {
        cout<<"Parameterized constructor"<<endl;
        a=p;
        b=q;
    }
    static void incX()
    {
        x++;
    }
    static int getX()
    {
        return x;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }

};
int Test::x=10;
int main()
{
   Test t1, t2;
   Test::incX();
   t1.incX();
   cout<<Test::getX()<<endl;
   cout<<t1.getX()<<endl;
   cout<<t2.getX()<<endl;

   Test t3(10, 20);
   cout<<t3.getA()<<endl;
   cout<<t3.getA()<<endl;
   cout<<t3.getX()<<endl;

    return 0;
}
