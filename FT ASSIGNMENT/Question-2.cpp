#include <iostream>
#include <string.h>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string bg;
    string phn;
    string nat;
    string mari;

public:
    Person(){}
    Person(string name,
           int age,
           string bg,
           string phn,
           string nat,
           string mari)
    {
        this->name = name;
        this->age = age;
        this->bg = bg;
        this->phn = phn;
        this->nat = nat;
        this->mari = mari;
    }

    void showAllPerson()
    {
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Blood Group       : " << bg << endl;
        cout << "Phone             : " << phn << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl;
    }
};

class Employee : public Person
{
protected:
    string nid;
    string des;
    string wh;
    float sal;
public:
    Employee(){}
    Employee(string name,
             int age,
             string bg,
             string phn,
             string nat,
             string mari,
             string nid,
             string des,
             string wh,
             float sal)
    {
        this->name = name;
        this->age = age;
        this->bg = bg;
        this->phn = phn;
        this->nat = nat;
        this->mari = mari;
        this->nid = nid;
        this->des = des;
        this->wh = wh;
        this->sal = sal;
    }

    void showAllEmployee()
    {
        Person::showAllPerson();
        cout << "National ID       : " << nid << endl;
        cout << "Designation       : " << des << endl;
        cout << "Working Hours     : " << wh << endl;
        cout << "Salary            : " << sal << " BDT" << endl;
    }
};


class Student : public Person
{
protected:
    float cgpa;
    string id;
    string sem;
public:
    Student(){}
    Student(string name,
            int age,
            string bg,
            string phn,
            string nat,
            string mari,
            float cgpa,
            string id,
            string sem)
    {
        this->name = name;
        this->age = age;
        this->bg = bg;
        this->phn = phn;
        this->nat = nat;
        this->mari = mari;
        this->cgpa = cgpa;
        this->id = id;
        this->sem = sem;
    }

    void setStudentToFaculty(float cgpa, string id, string sem)
    {
        this->cgpa = cgpa;
        this->id = id;
        this->sem = sem;
    }

    void showStudentToFaculty()
    {
        cout << "CGPA              : " << cgpa << endl;
        cout << "Student ID        : " << id << endl;
        cout << "Semester          : " << sem << endl;
    }

    void showAllStudent()
    {
        Person::showAllPerson();
        cout << "CGPA              : " << cgpa << endl;
        cout << "Student ID        : " << id << endl;
        cout << "Semester          : " << sem << endl;

    }
};


class GraduateStudent : public Student
{
protected:
    int fd;
    string sub;
public:
    GraduateStudent(){}
    GraduateStudent(string name,
                    int age,
                    string bg,
                    string phn,
                    string nat,
                    string mari,
                    float cgpa,
                    string id,
                    string sem,
                    int fd,
                    string sub) : Student(name,age,bg,phn,nat,mari,cgpa,id,sem)
    {
        this->fd=fd;
        this->sub = sub;
    }
    void showAllGraduateStudent()
    {
        Student::showAllStudent();
        cout << "Fall/Drop         : " << fd << endl;
        cout << "Subject           : " << sub << endl;
    }
};

class Officer : public Employee
{
protected:
    string inst;
public:
    Officer(){}
    Officer(string name,
            int age,
            string bg,
            string phn,
            string nat,
            string mari,
            string nid,
            string des,
            string wh,
            float sal,
            string inst) : Employee(name,age,bg,phn,nat,mari,nid,des,wh,sal)
    {
        this->inst = inst;
    }

    void showAllOfficer()
    {
        Employee::showAllEmployee();
        cout << "Institute         : " << inst << endl;
    }
};

class Faculty : public Employee
{
protected:
    string fac;
public:
    Faculty(){}
    Faculty(string name,
            int age,
            string bg,
            string phn,
            string nat,
            string mari,
            string nid,
            string des,
            string wh,
            float sal,
            string fac) : Employee(name,age,bg,phn,nat,mari,nid,des,wh,sal)
    {
        this->fac = fac;
    }
    void showAllFaculty()
    {
        Employee::showAllEmployee();
        cout << "Faculty           : " << fac << endl;
    }
};

class TeachingAssistant : public Faculty, public Student
{
protected:
    string type;
public:
    TeachingAssistant(){}
    TeachingAssistant(string name,
                      int age,
                      string bg,
                      string phn,
                      string nat,
                      string mari,
                      string nid,
                      string des,
                      string wh,
                      float sal,
                      string fac,
                      float cgpa,
                      string id,
                      string sem,
                      string type) : Faculty(name,age,bg,phn,nat,mari,nid,des,wh,sal,fac)
    {
        Student::setStudentToFaculty(cgpa, id, sem);
        this->type = type;
    }
    void showAllTeachingAssistant()
    {
        Faculty::showAllFaculty();
        Student::showStudentToFaculty();
        cout << "Type              : " << type << endl;
    }
};



int main()
{
    cout << "----------- IP FINAL TERM ASSIGNMENT Question - 2 -------------" << endl;
    cout << "---------------------------------------------------------------" << endl << endl << endl;

    cout << "Person\n";
    cout << "-------------------------------------------" << endl;
    Person p1("Tahsin", 23, "B+", "01711804569", "Bangladeshi", "Unmarried");
    p1.showAllPerson();

    cout<< "\n\nEmployee\n";
    cout << "-------------------------------------------" << endl;
    Employee e1("Stark", 21, "B+", "01710831977", "American","Unmarried", "1185963251", "Manager", "5-6 hours", 25000);
    e1.showAllEmployee();


    cout<< "\n\nStudent\n";
    cout << "-------------------------------------------" << endl;
    Student s1("Disha", 21, "A+", "01589652347", "Korean", "Unmarried", 3.5, "22-46026-1","Spring 21-22");
    s1.showAllStudent();


    cout<< "\n\nGraduate Student\n";
    cout << "-------------------------------------------" << endl;
    GraduateStudent g("Hasib",27, "O+", "01559863418", "Canadian", "Unmarried", 3.89, "18-465642", "Fall 18-19", 0, "CSE");
    g.showAllGraduateStudent();

    cout<< "\n\nOfficer\n";
    cout << "-------------------------------------------" << endl;
    Officer o1("Rifat", 32, "B+", "01784512039", "American","Married", "7845128956", "Executive", "5-6 hours", 35000, "Dhaka Bank");
    o1.showAllOfficer();


    cout<< "\n\nfaculty\n";
    cout << "-------------------------------------------" << endl;
    Faculty f("Neymar", 32, "B+", "01718451203", "African","Married", "1895623014", "Lecturer", "7-10 hours", 45000, "FST");
    f.showAllFaculty();


    cout<< "\n\nTeaching Assistant\n";
    cout << "-------------------------------------------" << endl;
    TeachingAssistant ta("Mahmud", 32, "B+", "01778965231", "Bangladeshi","Married", "1234567891", "Intern", "5-6 hours", 1500, "FST", 3.8, "22-46026-1","Spring 21","Part time");
    ta.showAllTeachingAssistant();

    cout << "--------------------------------------------------------------------";

    return 0;

}
