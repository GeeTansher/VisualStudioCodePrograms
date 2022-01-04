#include <iostream>
using namespace std;
class Student
{
public:
    int age;
    float marks;
    string name;
    string enroll_no;
    void set()
    {
        cout << "Enter age of student:" << endl;
        cin >> age;
        cin.ignore();
        cout << "Enter name of student:" << endl;
        getline(cin, name);
        cout << "Enter Enrollment Number:" << endl;
        getline(cin, enroll_no);
        cout << "Enter Marks of student:" << endl;
        cin >> marks;
    }
    void display()
    {
        cout << "Student's age:" << age << endl;
        cout << "Student's Name:" << name << endl;
        cout << "Student's Enrollment Number:" << enroll_no << endl;
        cout << "Student's Marks:" << marks << endl;
    }
};

class Faculty
{
public:
    string facultyname;
    long int facultycode;
    float salary;
    int age;
    float experience;
    string gender;
    string dept;
    void set()
    {
        cin.ignore();
        cout << "Enter Faculty Name:" << endl;
        getline(cin, facultyname);
        cout << "Enter Faculty code:" << endl;
        cin >> facultycode;
        cout << "Enter salary:" << endl;
        cin >> salary;
        cout << "Enter age:" << endl;
        cin >> age;
        cout << "Enter experience:" << endl;
        cin >> experience;
        cin.ignore();
        cout << "Enter gender:" << endl;
        getline(cin, gender);
        cout << "Enter department:" << endl;
        getline(cin, dept);
    }
    void display()
    {
        cout << "Faculty's Name:" << facultyname << endl;
        cout << "Faculty's Code:" << facultycode << endl;
        cout << "Faculty's Salary:" << salary << endl;
        cout << "Faculty's Department:" << dept << endl;
        cout << "Faculty's Age:" << age << endl;
        cout << "Faculty's Experience:" << experience << endl;
        cout << "Faculty's Gender:" << gender << endl;
    }
};

class Person : public Student, public Faculty
{
public:
    void display()
    {
        cout << "Person details:" << endl;
        cout << "Student details:" << endl;
        Student::display();
        cout << "Faculty details:" << endl;
        Faculty::display();
    }
};

int main()
{
    Person obj1;
    cout << "Enter the details of student..." << endl;
    obj1.Student::set();
    cout << "Enter the details of faculty..." << endl;
    obj1.Faculty::set();
    obj1.display();
    return 0;
}
