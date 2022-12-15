#include<iostream>
using namespace std;

int main()
{
    // long long int n;
    // long long int fn=1;
    // cin>>n;
    // while(n>=1)
    // {
    //     fn=fn*n;
    //     n--;
    // }
    // int a=0,b=0;
    // while(fn%10==0)
    // {
    //     a++;
    //     b++;
    //     fn/=10;
    //     if(fn==2)
    //     {
    //         a++;
    //     }
    //     else if(fn==5)
    //     {
    //         b++;
    //     }
    // }
    // cout<<min(a,b);

    // count no of 5s that will come in fac(n)
    long long int n;
    cin>>n;
    long int count=0;
    for(int i=5;n/i>=1;i=i*5)
    {
        count+=n/i;
    }
    cout<<count;
    return 0;
}