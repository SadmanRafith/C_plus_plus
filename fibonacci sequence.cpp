#include <iostream>
using namespace std;
int main (void)
{
int Fibonacci[15], i;
Fibonacci[0] = 0; // by definition
Fibonacci[1] = 1; // ditto
for ( i = 2; i < 15; ++i )
	Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
for ( i = 0; i < 15; ++i )
	cout<< "Fibonacci["<<i<<"]="<<Fibonacci[i]<<endl;
return 0;
}
