#include<iostream>
using namespace std;
void arrayfunc(int num[],int size,int sum)
{
    cout<<"The pairs are:";
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if((num[i]+num[j])==sum)
                cout<<endl<<"("<<num[i]<<","<<num[j]<<")";
        }
    }
}
int main()
{
    int n,sum;
    cout<<"Enter the number of elements and sum:";
    cin>>n>>sum;
    int ar[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    arrayfunc(ar,n,sum);
    return 0;
}