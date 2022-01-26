#include<iostream>
using namespace std;

int main()
{
    int t;
    long long int y,x;
    long long int m,num;
    cin>>t;
    while(t--)
    {
        cin>>y>>x;
        m=max(y,x);
        if(m==y)
        {
            if(m%2==0)
            {
                num=(m*m)-x+1;
            }
            else
            {
                num=((m-1)*(m-1)+1)+x-1;
            }
        }
        else
        {
            if(m%2!=0)
            {
                num=(m*m)-y+1;
            }
            else
            {
                num=((m-1)*(m-1)+1)+y-1;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}