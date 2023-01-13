#include<iostream>
using namespace std;

int main()
{
    cout << "\n";
    int triNum=0;
    int n=1;
    int a;

    cout << "Enter the Nth number : ";
    cin >> a;

    for(n=1; n<=a; n=n+1){
        triNum = triNum + n;
    }
    cout << triNum;

    cout << "\n";
    return 0;
}