#include <iostream>
using namespace std;
int main()
{
   //array-collection of similar types of data

int arr[5]={55, 33, 155, 11, 22};
cout<<arr[3]<<endl;
cout<<arr[3+1]<<endl;
cout<<arr[3-1]<<endl;
cout<<arr[5]<<endl;
cout<<arr[8-6]+arr[-3+4]+arr[2]-4<<endl;

/*for(int i=0; i<5; i++)
{
cout<<arr[i]<<" ";
}*/
return 0;
}
