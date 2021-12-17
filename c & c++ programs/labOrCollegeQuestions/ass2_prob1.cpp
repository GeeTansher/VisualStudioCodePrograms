#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    char c;
    int v=0,u=0,l=0,d=0;
    cout<<"Enter:";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        c=str.at(i);
        switch(c)
            {
                case 'A':case 'E':case 'I':case 'O':case 'U':case 'a':case 'e':case 'i':case 'o':case 'u':
                v++;
            }
        if(isupper(c))
        {
            u++; 
        }
        else if(islower(c))
        {
            l++;
        }
        else if(isdigit(c))
            d++;
    }
    cout<<endl<<"The values are:"<<u<<endl<<l<<endl<<d<<endl<<v;
    return 0;
}