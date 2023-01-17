//checking the smallest of four numbers

#include<iostream>
using namespace std;

int min(int, int, int, int);

int main()
{
    cout << "\n";
    
    int a, b, c, d;
    cout << "Enter the four numbers: ";
    cin >> a >> b >> c >> d;

    cout << min(a,b,c,d) << " is the smallest number!";

    cout << "\n";
    return 0;
}


int min(int a, int b, int c, int d){
    int min = a;
    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }
    if(d < min){
        min = d;
    }
    return min;
}