#include <iostream>
using namespace std;


void cube(int Main_Array[]){
    for(int i=0; i<5; i++){
        Main_Array[i] = Main_Array[i]*Main_Array[i]*Main_Array[i];
        cout << Main_Array[i] << " ";
    }
}

int main()
{
    cout << "\n";
    int Main_Array[5] = {1,2,3,4,5};

    cout << "Here's your main array: ";
    for(int i=0; i<5; i++){
        cout << Main_Array[i] << " ";
    }
    cout << "\n";

    cout << "New array after cube: ";
    cube(Main_Array);

    cout << "\n";
    return 0;
}
