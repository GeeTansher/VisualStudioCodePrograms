#include<iostream>
#include<conio.h>
using namespace std;
class tollbooth
{
	unsigned int car;
	double amt;
	public:
	tollbooth()
	{
		car = 0;
		amt = 0;
	}
	void payingcar()
	{
		car++;
		amt+=0.50;
	}
	void nonpayingcar()
	{
		car++;
	}
	void display()
	{
		cout<<"Number of cars: "<<car<<endl;
		cout<<"Amount: "<<amt<<endl;
	}
};

int main()
{
	char ch;
	tollbooth t;
	do{
		cout<<"\nPress:\n1. Paying \n2. Non paying \n3. Press ESC to Display and Exit\n";
		ch=_getch();
		switch(ch)
		{
			case '1':
                t.payingcar();
                cout<<"Car added";
                break;
			case '2':
                t.nonpayingcar();
                cout<<"Car added";
                break;
            default:
            if(ch==27)
            {
                t.display();
                exit(0);
            }
            cout<<"Entered something wrong.";
            break;
		}
    }while(1);
    return 0;
}
