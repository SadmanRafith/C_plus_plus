#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    
    public:
    void setDimension(int l, int b){
        length=l;
        breadth=b;
    }

    int getArea(){
        return length*breadth;
    }
    
    //constructor
    Rectangle(){
        cout << "Constructor" << "\n";
    }

    //destructor
    ~Rectangle(){
        cout << "Destrctor" << "\n";
    }
};

int main()
{
    cout << "\n";
    Rectangle rt;

    rt.setDimension(7,4);
    cout << rt.getArea() << "\n";

    cout << "\n";
    return 0;
}