#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    if(n==3 || n==2)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    for(long int i=1;i<=n;i++)
    {
        if(i%2==0)
            cout<<i<<" ";
    }
    for(long int i=1;i<=n;i++)
    {
        if(i%2!=0)
            cout<<i<<" ";
    }
    return 0;
}