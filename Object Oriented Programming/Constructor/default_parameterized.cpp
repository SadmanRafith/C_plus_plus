#include <iostream>
using namespace std;

class Test{
    static int x;
    int a, b;
    
    public:
    Test(){
        cout << "Default/empty constructor" << "\n";
    }

    Test(int p, int q){
        cout << "Parameterized constructor" << "\n";
        a = p;
        b = q;
    }

    static void incX(){
        x++;
    }
    static int getX(){
        return x;
    }
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
};

int Test::x=10;

int main()
{
    cout << "\n";
    Test t1, t2;
    Test::incX();
    t1.incX();

    cout << Test::getX() << "\n";
    cout << t1.getX() << "\n";
    cout << t2.getX() << "\n";

    Test t3(10, 20);
    cout << t3.getA() << "\n";
    cout << t3.getA() << "\n";
    cout << t3.getX() << "\n";

    cout << "\n";
    return 0;
}