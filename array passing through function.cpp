#include <iostream>
using namespace std;

void cube(int Main_Array[])
{
    for(int i=0; i<5; i++){
        Main_Array[i] = Main_Array[i]*Main_Array[i]*Main_Array[i];
        cout << Main_Array[i] << " ";
    }
}



int main ( )
{
    int Main_Array[5] = {1,2,3,4,5};
    cout << "Here's your main array : \n";
    for(int i=0; i<5; i++){
        cout << Main_Array[i] << " ";
    }
    cout << "\nNew array after cube : \n";
    cube(Main_Array);
}
