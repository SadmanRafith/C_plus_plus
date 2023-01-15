#include<iostream>
using namespace std;

class Student{
    private:
    int newid;
    string newname;
    int newbalance;
    int updatedid;
    string updatedname;
    int updatedbalance;

    public:
    void Update(int id, string name, int balance){
        newid = id;
        newname = name;
        newbalance = balance;
        cout << newid << "\n" << newname << "\n" << newbalance << "\n";
    }

    void Update1(int id, string name, int balance){
        updatedid = id;
        updatedname = name;
        updatedbalance = balance;
        cout << updatedid << "\n" << updatedname << "\n" << updatedbalance << "\n";
    }

};

int main ()
{
    cout << "\n";
    Student s1,s2, s3, s4;
    cout << "UPDATE 0 ";
    cout << "Output :\n";
    s1.Update(19, "Tahsin", 100);
    cout << "\n";
    s2.Update(20, "Disha", 500);
    cout << endl;

    cout << "UPDATE 1 ";
    cout << "Output :\n";
    s3.Update1(25, "Jett", 30);
    cout << "\n";
    s4.Update1(26, "Sage", 45);


    cout << "\n";
    return 0;
}