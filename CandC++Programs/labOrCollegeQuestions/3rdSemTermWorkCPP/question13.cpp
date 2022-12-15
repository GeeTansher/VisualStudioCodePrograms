#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "Person class constructor." << endl;
    }
    void disp(int x)
    {
        cout << "Person's Display function called. x=" << x << endl;
    }
};

class Faculty : virtual public Person
{
public:
    Faculty()
    {
        cout << "Faculty class constructor." << endl;
    }
};

class Student : virtual public Person
{
public:
    Student()
    {
        cout << "Student class constructor." << endl;
    }
};

class Final : public Faculty, public Student
{
public:
    Final()
    {
        cout << "Final class constructor." << endl;
        ;
        cout << "Calling display func of person class."<<endl;
        disp(5);
    }
};

int main()
{
    Final f;
    return 0;
}
