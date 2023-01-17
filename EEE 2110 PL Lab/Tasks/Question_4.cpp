//calculating the volume and surface area of a sphere


#include<iostream>
#include<math.h>
using namespace std;

void compute_sphere(float);

int main()
{
    cout << "\n";

    float r;
    cout << "Enter the radius(meter): ";
    cin >> r;

    compute_sphere(r);


    cout << "\n";
    return 0;
}

void compute_sphere(float r){
    float v = ((4 * 3.1416 * r * r * r)/3);
    cout << "The volume of the sphere is: " << v << " meter cube!" << "\n";

    float s = (4 * 3.1416 * r * r); 
    cout << "The surface area of the sphere is: " << s << " meter square!" << "\n";
}