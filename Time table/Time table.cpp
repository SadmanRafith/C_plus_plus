#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<< "Enter a number: ";
    cin>>n;
    cout<< "The time table of given number is:"<<endl;
    for(int i=0; i<=12;i++)
    {
        cout<<n<<" x "<<i<<"= "<<n*i<<endl;
    }
    return 0;
}
