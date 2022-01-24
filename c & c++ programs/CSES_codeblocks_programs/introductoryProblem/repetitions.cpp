#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    long int max=0,fmax=1;
    getline(cin,str);
    for(unsigned int i=0;i<str.length();i++)
    {
        max=0;
        if(str[i+1]!='\0' && str[i]==str[i+1])
        {
            unsigned int j=i;
            while(str[i]==str[j] && j<str.length())
            {
                max++;
                j++;
            }
        }
        if(max>fmax)
            fmax=max;
    }
    cout<<fmax;
    return 0;
}