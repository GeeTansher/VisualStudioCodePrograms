#include<iostream>
using namespace std;

int main()
{
    long int n;
    int flag=0;
    cin>>n;
    // array<int,n> ar;
    int ar[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>ar[i];
    }
    long int total =(n*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
        total-=ar[i];
    }
    cout<<total;
    // for(int i=1;i<=n;i++)
    // {
    //     flag = 0;
    //     for(int j=0;j<n;j++)
    //     {
    //         if(ar[j]==i)
    //         {
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     // if(!ar.find(i))
    //     // {
    //     //     cout<<i;
    //     // }
    //     if(flag==0)
    //     {
    //         cout<<i;
    //     }
    // }
    return 0;
}