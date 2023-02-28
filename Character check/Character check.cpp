#include<iostream>
using namespace std;

int main()
{
    int num;
    string word;
    char c;

    cout<< "Enter number of characters : ";
    cin>>num;
    cout<< "Enter the Alphabet: ";
    cin>>c;
    cout<< "enter the word: ";
    cin>> word;
    cout<<endl;
    bool found = false;

    for(int i=0; i<num; i++)
    {
        if(word[i]==c)
            found=true;
        break;
    }
    cout<< "***************************************************************************"<<endl;
    if(found)
        cout<< "your given word "<<word<< " has "<<num<< " characters and contains character "<<c;
    else
         cout<< "your given word "<<word<< " has "<<num<< " characters and does not contain character "<<c;
}
