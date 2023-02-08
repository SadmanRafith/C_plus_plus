#include<iostream>
using namespace std;

int main()
{
    int N, prime, n;
    cout<< "Enter the value of N: ";
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        prime =0;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                prime=1;
                break;
            }
        }
        if(prime==0 && n!=1)
            cout<< i<< " ";
    }
    return 0;
}
