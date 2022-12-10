#include <iostream>
using namespace std;
int main()
{
    char A[]="NICE";
    int i=0;
    int j=0;
    while(i<4){
      j=i;
      do{
       cout<<A[j]; //A[o]= N | A[1]= I |A[2]= C | A[3]= E | A[1]= I
       j=(j+1)%4; //j= (3+1)%4= 0
     }
       while(j!=i); // 0!=0
       i++;
       cout<<endl;
     }
     return 0;
}
