#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t=0;
    cout<<"enter numbers:";
    cin>>a>>b>>c;
    while((a!=0) & (b!=0) & (c!=0))
    {
        a--;
        b--;
        c--;
        t++;
    }
    cout<<"the smallest number is:"<<t;
    return 0;
}