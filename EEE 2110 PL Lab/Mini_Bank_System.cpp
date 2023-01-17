#include<iostream>
using namespace std;

int main()
{
    int deposit;
    int withdrawal;
    int loan;
    int option;

    int balance = 500;

    cout << "Press 1 for deposit" << "\n";
    cout << "Press 2 for withdrawal" << "\n";
    cout << "Press 3 for loan" << "\n";
    
    cout << "\nEnter option: ";
    cin >> option;
    

    switch(option){ 
        case 1:{
            cout << "\nEnter your amount: "; 
            cin >> deposit;
            balance += deposit; 
            cout << "\nThe total balance after deposit: " << balance;
            break;
        }
        case 2:{
            cout << "\nEnter your amount: "; 
            cin >> withdrawal;
            if(balance>withdrawal){
                balance-= withdrawal; 
            }
            cout << "\nThe total balance after withdrawal: " << balance;
            break;
        }
        case 3:{ 
            cout << "\nEnter your amount: "; 
            cin >> loan;
            balance -= loan;
            cout << "\nThe total balance after loan: " << balance;
            break;
        }
        default:{}
    }

    return 0;
}