#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    float marks;

    cout << "enter marks of a subject: ";
    cin >> marks;
    
    if(marks>=90){
        cout << "A+" << "\n";
    }
    else if(marks>=85){
        cout << "A" << "\n";
    }
    else if(marks>=80){
        cout << "B+" << "\n";
    }
    else{
        cout << "other grades below B+" << "\n";
    }

    cout << "\n";
    return 0;
}