#include <iostream>

using namespace std;

int main()
{
    cout<<"Md. Tahsin Hasib"<<endl;
    cout<<"22-46026-1"<<endl;

    int a = 37;
    int b = 16;
    int c = 18;
    int Addition;
    float Average;
    int Modulus;

    Addition = a + b + c;
    Average =(float) Addition/3;
    Modulus = a % (int) Average;

    cout<<"Addition: "<<Addition<<endl;
    cout<<"Average: "<<Average<<endl;
    cout<<"Modulus: "<<Modulus<<endl;

    return 0;
}
