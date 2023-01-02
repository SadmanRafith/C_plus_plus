#include <iostream>
#include <string.h>
using namespace std;
int main ( )

{
    float a , b , sum , sub , mul , div ;
    string input, YES = "Y", NO = "N" ;
    char opt;

    cout << "Md. Tahsin Hasib \n22-46026-1" << endl << endl ;

    cout << "Do you want to start the program? type Y or N : " ;
    cin >> input ;

    if  ( input == YES ){
            cout << "\nSelect an option from the menu below : \n\n+ , - , * , / " << endl ;
            cout << "\n" ;
            cout << "Option : ";
            cin >> opt;
                switch ( opt )
                {
                case '+' :
                    cout << "\nEnter two numbers : " ;
                    cin >> a >> b ;
                    sum = (float) a + b ;
                    cout << "\nSummation is : " << sum << endl ;
                    break;
                case '-' :
                    cout << "\nEnter two numbers : " ;
                    cin >> a >> b ;
                    sub = (float) a - b ;
                    cout << "\nSubtraction is : " << sub << endl ;
                    break;
                case '*' :
                    cout << "\nEnter two numbers : " ;
                    cin >> a >> b ;
                    mul = (float) a * b ;
                    cout << "\nMultiplication is : " << mul << endl ;
                    break;
                case '/' :
                    cout << "\nEnter two numbers : " ;
                    cin >> a >> b ;
                    div = (float) a / b ;
                    cout << "\nDivision is : " << div << endl ;
                    break;
                default  :
                     cout << "\nInvalid Operator." << endl;
                }
            }
    else
        cout << "\ncloses." << endl;



}
