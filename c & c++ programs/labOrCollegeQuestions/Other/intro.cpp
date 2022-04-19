#include<iostream>
using namespace std;
int main()
{
    // string n;
    // int n1;
    // cin>>n;
    // for(int i=0;n[i]!='\0';i++)
    // {
    //     if(n[i]=='.')
    //     {
    //         n1=(int)n[i+1];
    //     }
    // }
    // cout<<n1;
    float f;
    int n;
    cin>>f;
    f=f*10;
    cout<<endl<<f;
    n=(int)f;
    cout<<endl<<n;
    n=n%10;
    cout<<endl<<n;
    return 0;
}