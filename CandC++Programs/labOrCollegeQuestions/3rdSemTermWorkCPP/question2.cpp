#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    char c;
    string s="",u="",l="",d="";
    cout<<"Enter the string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        c=str.at(i);
        if(isupper(c))
            u+=c;
        else if(islower(c))
            l+=c;
        else if(isdigit(c))
            d+=c;
        else
            s+=c;
    }
    d=d+u+l+s;
    cout<<endl<<"The output string is:"<<d;
    return 0;
}