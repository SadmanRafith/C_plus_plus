#include<iostream>
#include<sstream>
using namespace std;


int main()
{
    int input;
    cout << "Enter an input value: ";
    cin >> input;

    stringstream ssobj;
    ssobj << input;

    string temp;
    ssobj >> temp;

    cout << "String number is: " << temp << "\n";

    return 0;
}