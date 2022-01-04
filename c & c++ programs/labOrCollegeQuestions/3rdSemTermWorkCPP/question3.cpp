#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    private:
    long int pan;
    string name;
    float income,tax;
    public:
    void inputInfo(long int pan,string name,float income)
    {
        this->pan=pan;
        this->name=name;
        this->income=income;
    }
    void taxCalc()
    {
        if(income<=250000)
            tax=0;
        else if(income<=300000)
            tax=(income-250000)*0.1;
        else if(income<=400000)
            tax=5000+((income-300000)*0.2);
        else
            tax=25000+((income-400000)*0.3);
    }
    void displayInfo()
    {
        cout<<endl<<"Employee details:";
        cout<<endl<<"Pan number:"<<pan;
        cout<<endl<<"Name:"<<name;
        cout<<endl<<"Income:"<<income;
        cout<<endl<<"Tax:"<<tax;
    }

};

int main()
{
    long int pan;
    string name;
    float income;
    Employee e;
    cout<<"\nEnter your Pan number:";
    cin>>pan;
    cin.get();
    cout<<"\nEnter your name:";
    getline(cin,name);
    cout<<"\nEnter your income:";
    cin>>income;
    e.inputInfo(pan,name,income);
    e.taxCalc();
    e.displayInfo();
    return 0;
}