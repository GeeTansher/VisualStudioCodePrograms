#include<iostream>
using namespace std;

class bank
{
    private:
    string name;
    int accno,type;
    float balance;
    public:
    void setInfo(string name,int accno,int type,float balance)
    {
        this->name = name;
        this->accno=accno;
        this->balance=balance;
        this->type = type;
    }
    void deposit(float amnt)
    {
        balance+=amnt;
        cout<<"\nTotal Balance now:"<<balance;
    }
    void withdraw(int amnt)
    {
        if(amnt>balance)
        {
            cout<<"Sorry insufficient balance...";
            return;
        }
        else
            balance-=amnt;
        cout<<"\nTotal Balance now:"<<balance;
    }
    void display()
    {
        cout<<endl<<"Your details:";
        cout<<endl<<"Name:"<<name;
        cout<<endl<<"Account number:"<<accno;
        if(type==1)
            cout<<endl<<"Type of account:Savings";
        else
            cout<<endl<<"Type of account:Current";
        cout<<endl<<"Balance:"<<balance;
    }
};

int main()
{
    bank b;
    string name;
    int accno,type,choice;
    float balance,amnt;
    cout<<"\nEnter your name:";
    getline(cin,name);
    cout<<"\nEnter your account number:";
    cin>>accno;
    cout<<"\nEnter type of account:\n1. Savings\n2.Current\n";
    cin>>type;
    cout<<"\nEnter your balance:";
    cin>>balance;
    b.setInfo(name,accno,type,balance);
    while(1)
    {
        cout<<"\n\nWhat you want to do?";
        cout<<"\n1. Deposit money\n2. Withdraw money\n3. Display information\n4. Exit\n";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<endl<<"Enter amount to be deposited:";
                cin>>amnt;
                b.deposit(amnt);
                break;
            case 2:
                cout<<endl<<"Enter amount to withdraw:";
                cin>>amnt;
                b.withdraw(amnt);
                break;
            case 3:
                b.display();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}