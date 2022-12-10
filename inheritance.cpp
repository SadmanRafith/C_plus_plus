#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    string name;
    int age;
protected:
    string bloodGroup;
public:
    Person()
    {
        cout<<"Empty Person"<<endl;
    }
    Person(string name, int age, string bloodGroup)
    {
        cout<<"Parameterized Person"<<endl;
        this->name=name;
        this->age=age;
        this->bloodGroup=bloodGroup;
    }
    void setName(string name)
    {
        this->name=name;
    }

    void setAge(int age)
    {
        this->age=age;
    }
    void setBG(string bg)
    {
        this->bloodGroup=bg;
    }
    void showAll()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Blood Group: "<<bloodGroup<<endl;
    }

};
class Student: public Person
{
private:
    double cgpa;
    //name-parent
    //age-parent
protected:
    //bloodGroup-parent
public:
    Student()
    {
        cout<<"Empty Student"<<endl;
    }
    Student(string name, int age, string bloodGroup, double cgpa):Person(name, age, bloodGroup)
    {
        cout<<"Parameterized Student"<<endl;

        this->cgpa=cgpa;
    }
    void setCgpa(double cgpa)
    {
        this->cgpa=cgpa;
    }
    void showCgpa()
    {

        cout<<"CGPA: "<<cgpa<<endl;
    }


};

int main()
{
    //using empty constructor
    //base/parent class constructor is always called first before derived/child class constructor
    Student s1;
    //using the functions inherited from parent
    s1.setName("John");
    s1.setAge(22);
    s1.setBG("O+");
    //using own functions
    s1.setCgpa(3.55);
    //displaying all
    s1.showAll();
    s1.showCgpa();

    //using parameterized constructor
    //base/parent class constructor is always called first before derived/child class constructor
    Student s2("Allen", 25,"B+", 3.65);
    //displaying all
    s1.showAll();
    s1.showCgpa();

    return 0;
}
