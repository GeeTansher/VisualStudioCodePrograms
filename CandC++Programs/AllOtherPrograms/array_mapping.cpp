#include<bits/stdc++.h>
using namespace std;
int main()
{
      
      
  int t,n,arr[1000];
  cin>>t;
  while(t--)
  {
      
      cin>>n;
      int m[568]={0};     // this or 
      //map<int, int> m;     // this
      for(int i = 0; i < n; i++)
      {
          cin>>arr[i];
          ++m[arr[i]];
      }
      for(int i = 0; i < n; i++)
      {
          if(m[arr[i]] == 1)
            cout<<i + 1<<endl;
      }
  }
  return 0;
}
