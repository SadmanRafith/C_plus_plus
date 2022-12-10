#include <iostream>
using namespace std;

class Box {
  public:
    static int objectCount;
    Box(double l, double b, double h) {
      cout <<"Constructor called." << endl;
      length = l;
      breadth = b;
      height = h;
      objectCount++;
    }
    double Volume(){
         return length * breadth * height;
      }
   private:
      double length;
      double breadth;
      double height;
};
int Box::objectCount = 0;           //Must be initialize/written above main function.

int main()
{
   Box Box1(3.3, 1.2, 1.5);
   Box Box2(8.5, 6.0, 2.0);

   // Print total number of objects.
   cout << "Volume of Box1: "        <<Box1.Volume() <<endl;
   cout << "Total objects: "        <<Box::objectCount <<endl;

   return 0;
}

