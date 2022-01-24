#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,moves=0;
    cin>>n;
    long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(long int i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1])
        {
            while(ar[i]<ar[i-1])
            {
                ar[i]++;
                moves++;
            }
        }
    }
    cout<<moves;
}