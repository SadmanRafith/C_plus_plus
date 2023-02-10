#include<iostream>
using namespace std;
int main ( )
{
    int year, current_year = 2022, count=0;
    cout << "\n\n";
    cout << "\nEnter your birth year : ";
    cin >> year;
    cout << "\n\n";
    cout << "Leap years between " << year << " to current year(2022) are : ";
    for ( count=year; year<=current_year; year++){
            if ((year%4 == 0 && year%100!=0 ) || year%400 == 0 ){
                    cout <<" "<< year;
            }
    }
    cout << endl;
    return 0;
}
