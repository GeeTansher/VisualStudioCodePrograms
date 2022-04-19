#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int c=1;
    cout<<"Enter:";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str.at(i)==' ')
            c++;
    }
    cout<<endl<<"The no. of words are:"<<c;
    return 0;
}