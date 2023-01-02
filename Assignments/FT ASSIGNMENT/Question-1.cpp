#include<iostream>
#include<string.h>
using namespace std;

class Person
{
protected:
    string nat,phn,mari,bg;
public:
    string name;
    int age;
    Person(){}
    Person(string name,
           int age,
           string phn,
           string bg,
           string nat,
           string mari)
    {
        this->name=name;
        this->age=age;
        this->phn=phn;
        this->bg=bg;
        this->nat=nat;
        this->mari=mari;
    }
    void showdataPerson()
    {
        cout << "Name              : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Phone             : " << phn << endl;
        cout << "Blood Group       : " << bg << endl;
        cout << "Nationality       : " << nat << endl;
        cout << "Marital Status    : " << mari << endl;
    }
};
class Student : virtual public Person
{
protected:
    float cgpa;
public:
    string inst, id, dept, sem;
    Student(){}
    Student(string name,
            int age,
            string phn,
            string inst,
            string id,
            string sem,
            float cgpa,
            string bg,
            string nat,
            string mari) : Person(name,age,phn,bg,nat,mari)
    {
        this->inst=inst;
        this->id=id;
        this->sem=sem;
        this->cgpa=cgpa;
    }
    void showdataStudent()
    {
        Person::showdataPerson();
        cout << "Institute         : " << inst << endl;
        cout << "ID                : " << id << endl;
        cout << "Semester          : " << sem << endl;
        cout << "CGPA              : " << cgpa << endl;
    }

};
class GraduateStudent : public Student
{
protected:
    int fd;
public:
    string deg, dept;
    GraduateStudent(){}
    GraduateStudent(string name,
                     int age,
                     string phn,
                     string inst,
                     string id,
                     string sem,
                     float cgpa,
                     string bg,
                     string dept,
                     int fd,
                     string deg,
                     string nat,
                     string mari) : Student(name,age,phn,inst,id,sem,cgpa,bg,nat,mari),Person(name,age,phn,bg,nat,mari)
    {
        this->dept=dept;
        this->fd=fd;
        this->deg=deg;
    }
    void showdataGraduateStudent()
    {
        Student::showdataStudent();
        cout << "Department        : " << dept << endl;
        cout << "Fall/Drop         : " << fd << endl;
        cout << "Degree            : " << deg << endl;
    }
};
class Employee : virtual public Person
{
protected:
    string nid;
    float sal;
public:
    string des;
    string wh;
    Employee(){}
    Employee(string name,
             int age,
             string phn,
             string nid,
             float sal,
             string bg,
             string des,
             string wh,
             string nat,
             string mari) : Person(name,age,phn,bg,nat,mari)
    {
        this->nid=nid;
        this->sal=sal;
        this->des=des;
        this->wh=wh;
    }
    void showdataEmployee()
    {
        Person::showdataPerson();
        cout << "NID               : " << nid << endl;
        cout << "Salary            : " << sal << " BDT" << endl;
        cout << "Designation       : " << des << endl;
        cout << "Working hours     : " << wh << endl;
    }
};

class Officer : public Employee
{
public:
    string inst;
    Officer(){}
    Officer(string name,
            int age,
            string phn,
            string nid,
            float sal,
            string bg,
            string des,
            string wh,
            string inst,
            string nat,
            string mari) : Employee(name,age,phn,nid,sal,bg,des,wh,nat,mari),Person(name,age,phn,bg,nat,mari)
    {
        this->inst=inst;
    }
    void showdataOfficer()
    {
        Employee::showdataEmployee();
        cout << "Institute         : " << inst << endl;
    }
};
class Faculty : virtual public Employee
{
public:
    string inst;
    string sub;
    Faculty(){}
    Faculty(string name,
            int age,
            string phn,
            string nid,
            float sal,
            string bg,
            string des,
            string wh,
            string inst,
            string sub,
            string nat,
            string mari) : Employee(name,age,phn,nid,sal,bg,des,wh,nat,mari),Person(name,age,phn,bg,nat,mari)
    {
        this->inst=inst;
        this->sub=sub;
    }
    void showdataFaculty()
    {
        Employee::showdataEmployee();
        cout << "Institute         : " << inst << endl;
        cout << "Faculty           : " << sub << endl;
    }
};
int main()
{
    cout << "----------- IP FINAL TERM ASSIGNMENT Question - 1 -------------" << endl;
    cout << "---------------------------------------------------------------" << endl << endl << endl;

    cout << "Person\n";
    cout << "----------------------------------" << endl;
    Person();
    Person p("Tahsin", 21, "01723456789","B+", "Bangladeshi", "Unmarried");
    p.showdataPerson();

    cout << "\n\nStudent\n";
    cout << "----------------------------------" << endl;
    Student();
    Student s("Disha",21, "01778945612", "JU", "21-21168",
              "Semester - 3", 4.0, "B+", "Korean", "Unmarried");
    s.showdataStudent();

    cout << "\n\nGraduate Student\n";
    cout << "----------------------------------" << endl;
    GraduateStudent();
    GraduateStudent gs("Harry", 27, "01742369874", "BUET", "505", "Semester - 8",
                        3.8,"B-", "CSE", 0, "B.Sc in CSE", "American", "Unmarried");
    gs.showdataGraduateStudent();

    cout << "\n\nEmployee\n";
    cout << "----------------------------------" << endl;
    Employee();
    Employee e("Hasib", 35, "01789654123", "1234567890", 80000.00, "O+",
               "Manager", "10-12 hours", "Bangladeshi", "Married");
    e.showdataEmployee();

    cout << "\n\nOfficer\n";
    cout << "----------------------------------" << endl;
    Officer();
    Officer o("Stark", 25, "01615487932", "9876543210", 50000.00, "A+", "Executive",
              "5-6 hours", "Dhaka Bank", "Canadian", "Married");
    o.showdataOfficer();

    cout << "\n\nFaculty\n";
    cout << "----------------------------------" << endl;
    Faculty();
    Faculty f("Mahmud", 30, "01514896325", "7538642915", 30000.00, "B-",
              "Lecturer","7-8 hours", "AIUB", "FST", "Bangladeshi", "Married");
    f.showdataFaculty();
    cout << "----------------------------------------------------------------" << endl;
    return 0;
}
