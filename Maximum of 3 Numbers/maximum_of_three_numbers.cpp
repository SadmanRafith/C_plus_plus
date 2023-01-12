#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    int a, b, c;

    cout << "enter 3 numbers: ";
    cin >> a >> b >> c;

    if(a==b && a==c){
        cout<<"numbers are equal"<<endl;
    }
    else{
        if(a>b){
            if(a>c){
                cout<<"\na is largest among three";
            }
            else{
                cout<<"\nc is largest among three";
            }
        }
        else{
            if(b>c){
                cout<<"\n\nb is largest among three";
            }
            else{
                cout<<"\n\nc is largest among three";
            }
        }
    }

    cout << "\n";
    return 0;
}