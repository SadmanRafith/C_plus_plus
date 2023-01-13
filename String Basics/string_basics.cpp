#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "\n";
    char  s1[50] = "Tahsin" ;
    char  s2 [50] = "Hasib" ;
       
    strcat(s1,s2);                          //strcat function
    cout << strcat(s1,s2) << "\n";

    strcmp(s1,s2);                          //strcmp function
    cout << strcmp (s1,s2) << "\n" ;

    strcpy(s1,s2);                          //strcpy function
    cout << strcpy (s1,s2) << "\n" ;

    strlen(s1) ;                            //strlen function
    cout << strlen(s1) << "\n" ;

    strncat(s1,s2,2) ;
    cout << strncat (s1,s2,2) << "\n" ;

    strncmp(s1,s2,2) ;
    cout << strncmp (s1,s2,2) << "\n" ;

    cout << "\n";
    return 0 ;
}