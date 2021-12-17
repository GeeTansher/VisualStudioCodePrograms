#include<iostream>
#include<string.h>
using namespace std;
class StringDemo
{
    string str1,str2;
    public:
    void input()
    {
        cout<<"Enter 1st string";
        getline(cin,str1);
        cout<<endl<<"Enter 2nd string";
        getline(cin,str2);
    }
    void show()
    {
        cout<<endl<<"Strings before swap are:"<<endl<<str1<<endl<<str2;
    }
    void swap()
    {
        // string temp;
        // strcpy(temp,str1);
        // strcpy(str1,str2);
        // strcpy(str2,temp);
        str1.swap(str2);
        cout<<endl<<"Strings after swap are:"<<endl<<str1<<endl<<str2;
    }
};
int main()
{
    StringDemo str;
    str.input();
    str.show();
    str.swap();
    return 0;
}