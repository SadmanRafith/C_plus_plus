#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"enter array size: ";
cin>>a;
int arr[a];

for( int i=0 ; i<a ; i++ )
 {
   cout<<"enter elements: ";
   cin>>arr[i];
 }

for (int i=0; i<a;i++)
 {
    cout<<"\narr["<<i<<"]:";
    cout<<arr[i];
 }

return 0;
}
