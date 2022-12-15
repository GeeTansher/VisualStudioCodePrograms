#include <iostream>
using namespace std;
class SavingsAccount
{
    private:
	float savingsBalance;
    static float annualInterestRate;

	public:
	SavingsAccount(int value)
    {
        savingsBalance = value;
    }
	void calculateMonthlyInterest()
    {
	    savingsBalance = (savingsBalance+(savingsBalance * annualInterestRate) / 12);
    }
	static void modifyIntererestRate(float value)
    {
    	annualInterestRate = value;
    }
	float GetBalance() const 
    { return savingsBalance; }
	
};
float SavingsAccount::annualInterestRate = 0;

int main()
{
	SavingsAccount saver1(2000.00);
	SavingsAccount saver2(3000.00);
	SavingsAccount::modifyIntererestRate(4);
	saver1.calculateMonthlyInterest();
    cout<<"Interest Rate:4"<<endl;
	cout<< "Saver 1 Savings Balance: $" << saver1.GetBalance() <<endl;
	saver2.calculateMonthlyInterest();
	cout<< "Saver 2 Savings Balance: $" << saver2.GetBalance() <<endl;
	cout<<endl;
	SavingsAccount::modifyIntererestRate(5);
	saver1.calculateMonthlyInterest();
    cout<<"Interest Rate:5"<<endl;
	cout<< "Saver 1 Savings Balance: $" << saver1.GetBalance() <<endl;
	saver2.calculateMonthlyInterest();
	cout<< "Saver 2 Savings Balance: $" << saver2.GetBalance() <<endl;
	cout<<endl;
	return 0;
}

