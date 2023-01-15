#include <iostream>
using namespace std;

class A{
    public:
	A(){
        cout<<"A class Constructor." << endl;
    }
    void display(){
        cout<<"Base class content." << endl;
    }
};

class B : public A{
	public:
	B(){
        cout<<"B class Constructor." << endl;
    }
};

class C : public B{

    public:
	C(){
        cout<<"C class Constructor." << endl;
    }
};

int main()
{
    cout << "\n";
    C obj;
    obj.display();

    cout << "\n";
    return 0;
}