#include<iostream>
using namespace std;

void arraySort(int a[],int p,int b[],int q)
{
    int c[p+q];
    for(int i=0;i<p;i++)
    {
        c[i]=a[i];
    }
    for(int i=p,j=0;i<p+q;i++,j++)
    {
        c[i]=b[j];
    }
    cout<<endl;
    int ele;
        for(int i=0;i<p+q;i++)
        {
            for(int j=i+1;j<p+q;j++)
            {
                if(c[j]<c[i])
                {
                    ele=c[j];
                    c[j]=c[i];
                    c[i]=ele;
                }
            }
        }
    for(int i=0;i<p;i++)
    {
        a[i]=c[i];
    }
    for(int i=p,j=0;j<q;j++,i++)
    {
        b[j]=c[i];
    }
}

int main()
{
    int p,q;
    cout<<endl<<"Enter number of elements in array 1:";
    cin>>p;
    int a[p];
    cout<<endl<<"Enter elements:";
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Enter number of elements in array 2:";
    cin>>q;
    int b[q];
    cout<<endl<<"Enter elements:";
    for(int i=0;i<q;i++)
    {
        cin>>b[i];
    }
    arraySort(a,p,b,q);
    cout<<endl<<"Sorted arrays:"<<endl<<"A:";
    for(int i=0;i<p;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"B:";
    for(int i=0;i<q;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}