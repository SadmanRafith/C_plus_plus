#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if((num%2) == 0){
        cout << "The given number "<<num<< " is even" << "\n";
    }
    else{
        cout << "the given number " << num << " is odd" << "\n";
    }

    cout << "\n";
    return 0;
}