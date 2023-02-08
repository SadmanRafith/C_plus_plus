#include<iostream>
using namespace std;
int main()
{

    int number=4356;
    int digit[4];
     cout<<"The number is: "<< number<<endl;
    for(int i=0; i<4 ; i++)
    {

        digit[i]=number%10;
        number=number/10;
    }

    cout <<"digits are"<<endl;
    for(int j=3 ; j>=0 ; j-- )
    {
        cout<<digit[j]<<" ";
    }


}
