#include<iostream>
using namespace std;
int main ( )
{
    int arr[5]={10,20,30,40,50};
    int i,max,min;

    //for maximum value
    max = arr[0];
    for(i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Maximum Value is : " << max << endl;

    //for minimum value
    min = arr[0];
    for(i=0; i<5; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Minimum Value is : " << min << endl;


    return 0;

}
