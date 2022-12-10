#include <iostream>
using namespace std;
int main ( )
{
    int triNum=0;
    int n=1, a;
    cout << "Enter the Nth number : ";
    cin >> a;

    for (n=1; n<=a; n=n+1){
        triNum = triNum + n;
    }
    cout << triNum;
    return 0;
}
