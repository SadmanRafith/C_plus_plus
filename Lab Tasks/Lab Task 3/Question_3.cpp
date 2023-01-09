#include<iostream>
using namespace std;
int Fibonacci(int n)
{
if (n <= 1)
return n;
return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{

int n = 200, sum = 0;
cout << "Md. Tahsin Hasib"<< endl;
cout << "22-46026-1" << endl;
cout << "\n\n";
cout << "Fibonacci series up to 200 :  ";

while(Fibonacci(sum) <= n)
{
cout << Fibonacci(sum) << " ";
sum++;
}
}
