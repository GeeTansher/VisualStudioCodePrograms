#include<bits/stdc++.h>
using namespace std;

// int solve(int ind, int k, vector<int>& h, vector<int>& dp)
// {
//     if(ind==0)    return 0;
//     if(dp[ind]!=-1)   return dp[ind];
//     int minSteps=INT_MAX;
//     for(int i=1;i<=k;i++){
//         if(ind-i>=0){
//             int steps=solve(ind-i,k,h,dp) + abs(h[ind]-h[ind-i]);
//             minSteps=min(minSteps,steps);
//         }
//     }
//     return dp[ind]=minSteps;
// }

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    vector<int> dp(n+1,-1);
    dp[0]=0;
    // cout<<solve(n-1,k,h,dp);

    for(int i=1;i<n;i++){
        int mmSteps = INT_MAX;
        
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump = dp[i-j]+ abs(h[i]- h[i-j]);
                mmSteps= min(jump, mmSteps);
            }
        }
        dp[i]= mmSteps;
    }
    cout<<dp[n-1];
    return 0;
}