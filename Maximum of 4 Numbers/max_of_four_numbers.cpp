#include<iostream>
using namespace std;

int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main()
{
    cout << "\n";
    int a,b,c,d;

    cout << "Enter the numbers: ";
    cin >> a >> b >> c >> d;

    int left_max = max(a,b);
    int right_max = max(c,d);
    int final_max = max(left_max, right_max);

    cout << "The maximum number is: ";
    cout << final_max;

    cout << "\n";
    return 0;
}