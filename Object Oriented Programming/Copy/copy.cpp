#include<iostream>
using namespace std;

class Point{
    private:
    int x, y;

    public:
    Point(){
        cout << "Default constructor is called to construct the object" << "\n";
    }

    Point(const int &xValue, const int &yValue){
        x = xValue;
        y = yValue;
        cout << "Parameterized constructor is called to construct the object" << "\n";
    }

    Point(const Point &pointObj){
        x = pointObj.x;
        y = pointObj.y;
        cout << "Copy constructor is called to construct the object" << "\n";
    }

    void Print(){
        cout << "X-cordinate of point is : " << x << "\n";
        cout << "Y-cordinate of point is : " << y << "\n";
    } 
};

int main()
{
    cout << "\n";
    Point p1;
    Point p2(10,20);
    Point cp(p2);
    
    cout << "Print p1" << "\n";
    p1.Print();
    cout << "Print p2" << "\n";
    p2.Print();
    cout << "Print xp" << "\n";
    cp.Print();

    cout << "\n";
    return 0;
}