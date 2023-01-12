#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if(num1 <= num2){
        cout << " if block " << "\n";
        cout << num1 <<" is equal to or less than "<< num2 << "\n";
    }
    else{
        cout << " else block " << "\n";
        cout << num1 << " is greater than " << num2 << "\n";
    }

    return 0;
}