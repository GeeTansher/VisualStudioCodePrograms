#include<iostream>
#include <vector>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int sum=(n*(n+1))/2;
    long ans=sum/2;
    vector<long int> a,b;
    if(sum%2!=0)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=n;i>=1;i--)
        {
            if(i<=ans)
            {
                ans-=i;
                a.push_back(i);
            }
            else
            {
                b.push_back(i);
            }
        }
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<b.size()<<endl;
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}