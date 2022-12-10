#include <iostream>



using namespace std;



class Student
{
private:



    string name;
    string id;
    double cgpa;
public:



    void setName(string n)
    {
        name=n;
    }
    void setId(string i)
    {
        id=i;
    }
    void setCgpa(double c)
    {
        cgpa = c;
    }
    string getName()
    {
        return name;
    }
    string getID()
    {
        return id;
    }
    double getCgpa()
    {
        return cgpa;
    }



    void setAll(string n, string i, double c)
    {
        name = n;
        id= i;
        cgpa = c;
    }
    void showDetails()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<cgpa<<endl;



    }



};



int main()
{

    double sum=0;
    Student john, miller, allen;
    john.setName("John");
    john.setId("21-12345-2");
    john.setCgpa(3.55);
    cout<<john.getName()<<endl;
    cout<<john.getCgpa()<<endl;
    cout<<john.getID()<<endl;




    miller.setAll("Miller", "20-12345-3", 3.65);
    cout<<miller.getName()<<endl;
    cout<<miller.getCgpa()<<endl;
    cout<<miller.getID()<<endl;




    allen.setAll("Barry Allen", "21-98657-1", 3.22);
    allen.showDetails();



    sum = john.getCgpa()+miller.getCgpa()+allen.getCgpa();
    cout<<sum;





    return 0;
}

