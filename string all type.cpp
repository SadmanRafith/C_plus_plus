#include <iostream>
#include <string.h>
using namespace std;
int main ( )
{
     char  s1[50] = "Tahsin" ;
     char  s2 [50] = "Hasib" ;
                                                                                                                       //strcat function
    strcat ( s1 , s2 ) ;
    cout << strcat ( s1 , s2 ) << endl ;

    strcmp (s1 , s2 ) ;                                                                                     //strcmp function
    cout << strcmp (s1 , s2 ) << endl ;

    strcpy ( s1 , s2 ) ;                                                                                     //strcpy function
    cout << strcpy ( s1 , s2 ) << endl ;

    strlen(s1) ;                                                                                     //strlen function
    cout << strlen(s1) << endl ;

    strncat ( s1 , s2 , 2  ) ;
    cout << strncat (  s1 ,s2 , 2) << endl ;

    strncmp ( s1 , s2 , 2 ) ;
    cout << strncmp ( s1, s2, 2 ) << endl ;





    return 0 ;
}
