#include<iostream>
using namespace std;
class Test
{
 	private: 
 	string str;
 	public:
 	Test(string str)
	{
		this->str=str;
 	}
	friend void printeven(Test ob);
};

void printeven(Test ob)
{
    cout<<"Letters at even places:";
	for(int i=0;i<ob.str.length();++i)
 	{
		if(i%2!=0)
		cout<<ob.str[i]<<"  ";
	}
}
int main()
{
 	string str;
    cout<<"Enter the string:";
    getline(cin,str);
    Test o1(str);
    printeven(o1);
    return 0;
}
