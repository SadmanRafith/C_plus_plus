#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person()
    {
        cout << "Empty constructor Person" << endl;
    }
    Person(string name, int age)
    {
        cout << "Parameterized constructor Person" << endl;
        this->name = name;
        this->age = age;
    }
    void setAll(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void showAll()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }

};


class Student : public Person
{
private:
    double CGPA;
public:
    Student()
    {
        cout << "Empty constructor Student" << endl;
    }
    Student(string name, int age, double CGPA)
    {
        cout << "Parameterized constructor Student" << endl;
        this->CGPA = CGPA;
    }
    void setAll(string name, int age, double CGPA)
    {
        this->CGPA = CGPA;
        Person::
            setAll(name, age);
    }
    void setCGPA(double CGPA)
    {
        this->CGPA = CGPA;
    }
    double getCGPA()
    {
        return CGPA;
    }
    void showAll()
    {
        Person::
            showAll();
        cout << "CGPA : " << CGPA << endl;
    }
};


class Teacher : public Person
{
private:
    float Salary;
public:
    Teacher()
    {
        cout << "Empty constructor Teacher" << endl;
    }
    Teacher(string name, int age, float Salary)
    {
        cout << "Parameterized constructor Teacher" << endl;
        this->Salary = Salary;
    }
    void setAll(string name, int age, float Salary)
    {
        this->Salary = Salary;
        Person::
            setAll(name, age);
    }
    void setSalary(float Salary)
    {
        this->Salary = Salary;
    }
    double getSalary()
    {
        return Salary;
    }
    void showAll()
    {
        Person::
            showAll();
        cout << "Salary : " << Salary << endl;
    }
};





int main()
{
    Person p1;
    Person();
    Person("Tahsin", 21);
    p1.setAll("Tahsin", 21);
    p1.getName();
    p1.getAge();
    p1.showAll();

    Student s1;
    Student();
    Student("Hasib", 12, 3.5);
    s1.setAll("Hasib", 12, 3.5);
    s1.getName();
    s1.getAge();
    s1.getCGPA();
    s1.showAll();

    Teacher t1;
    Teacher();
    Teacher("Disha", 40, 35000);
    t1.setAll("Disha", 40, 35000);
    t1.getName();
    t1.getAge();
    t1.getSalary();
    t1.showAll();

}

