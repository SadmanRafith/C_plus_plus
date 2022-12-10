#include<iostream>
using namespace std;

class Point
{
    private:
    int x, y;
    public:
    Point()
    {
        cout << "Default constructor is called to construct the object" << endl;
    }
    Point(const int &xValue, const int &yValue)
    {
        x = xValue;
        y = yValue;
        cout << "Parameterized constructor is called to construct the object" << endl;
    }
    Point(const Point &pointObj)
    {
        x = pointObj.x;
        y = pointObj.y;
        cout << "Copy constructor is called to construct the object" << endl;
    }
    void Print()
    {
        cout << "X-cordinate of point is : " << x << endl;
        cout << "Y-cordinate of point is : " << y << endl;
    } 
};
int main()
{
    Point p1;
    Point p2(10,20);
    Point cp(p2);
    
    cout << "Print p1" << endl;
    p1.Print();
    cout << "Print p2" << endl;
    p2.Print();
    cout << "Print xp" << endl;
    cp.Print();
    return 0;
}
