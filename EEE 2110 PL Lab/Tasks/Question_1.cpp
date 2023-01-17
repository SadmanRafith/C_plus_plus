// average of four numbers

#include<iostream>
using namespace std;


float average(float, float, float, float);

int main()
{
    cout << "\n";
    float x1, x2, x3, x4;

    cout << "Enter the 4 numbers: ";
    cin >> x1 >> x2 >> x3 >> x4;

    cout << "The average of the four numbers is: " << average(x1, x2, x3, x4);

    cout << "\n";
    return 0;
}


float average(float x1, float x2, float x3, float x4){
    float sum = (x1 + x2 + x3 + x4);
    float avg = sum/4;
    return avg;
}