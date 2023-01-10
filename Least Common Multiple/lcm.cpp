#include<iostream>
using namespace std;

int main()
{
    cout << "\n";
    int n1, n2, lcm, hcf, temp;

    cout << "Enter two numbers : " ;
    cin >> n1 >> n2;

    hcf = n1;
    temp = n2;
    
    while(hcf != temp){
        if(hcf > temp){
            hcf = hcf - temp;
        }
        else{
            temp = temp - hcf;
        }
    }
    lcm = (n1*n2)/hcf;
    cout << "LCM = " << lcm;

    cout << "\n";
    return 0;
}