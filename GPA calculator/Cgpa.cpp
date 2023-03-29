#include<bits/stdc++.h>
using namespace std;

void Cgpa()
{
    int c;
    cout<< "Enter number of courses: ";
    cin>>c;
    cout<<endl;

float total;
    float sum=0;
float totalcredit=0;
    float credit[c];
    float grade[c];
    for(int i=0; i<c; i++)
    {
        cout<< "Enter number of credits of course "<<i+1<< " : ";
        cin>>credit[i];
        cout<< "Enter the points scored of course "<< i+1<< " : ";
        cin>> grade[i];
    }
    for(int j=0; j<c; j++)
    {
        total= credit[j]*grade[j];
        sum+=total;
    }
    for(int k=0; k<c; k++)
    {
        totalcredit+=credit[k];
    }

    double gpa;
    gpa = sum/totalcredit;
    cout<<endl;

    cout<< "Total points: "<<sum<<endl;
    cout<< "Total Credits: "<< totalcredit<<endl;
    cout<< "GPA: "<<gpa;

}

int main()
{

     cout<<"--------------------------------------------------------------------------"<<endl;
     cout<<"                                  GPA Calculator                           "<<endl;
     cout<<"       Grade points of the following :                                     "<<endl;
     cout<<"                            1: A+ = 4.00"<<endl;
     cout<<"                            2: A  = 3.75"<<endl;
     cout<<"                            3: B+ = 3.50"<<endl;
     cout<<"                            4: B  = 3.25"<<endl;
     cout<<"                            5: C+ = 3.00"<<endl;
     cout<<"                            6: C  = 2.75"<<endl;
     cout<<"                            7: B+ = 2.50"<<endl;
     cout<<"                            3: B+ = 3.50"<<endl;
     cout<< "Enter your grade points according to to your grade points"<<endl;
     cout<<"--------------------------------------------------------------------------\n"<<endl;
   Cgpa();
};
