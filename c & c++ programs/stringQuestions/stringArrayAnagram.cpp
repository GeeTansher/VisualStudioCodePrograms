#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many words:";
    cin>>n;
    string s[n],u,t;
    cout<<"Enter "<<n<<" words:\n";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int b=0;
    cout<<"The anagram pairs are:";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].length()==s[j].length())
            {
                u=s[i];t=s[j];
                sort(u.begin(),u.end());
                sort(t.begin(),t.end());
                if(u==t)
                {
                    cout<<"{ "<<s[i]<<","<<s[j]<<" }  ";
                    b++;
                }
            }
        }
    }
    if(b==0)
        cout<<"NONE";
    return 0;
}