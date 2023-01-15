#include<iostream>
using namespace std;

class Student{
    private:
    int newid;
    string newname;
    int newbalance;

    public:
    void Update(int id, string name, int balance){
        newid = id;
        newname = name;
        newbalance = balance;
        cout << newid << endl;
        cout << newname << endl;
        cout << newbalance << endl;
    }
};

int main()
{
    cout << "\n";
    Student s1,s2;
    cout << "Output :\n";
    s1.Update(19, "Tahsin", 100);
    cout << "\n";
    s2.Update(20, "Disha", 500);

    cout << "\n";
    return 0;
}