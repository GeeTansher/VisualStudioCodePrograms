#include<bits/stdc++.h>

using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    a.second < b.second;
}
/*
In Dynamic Programming first implement problem by recursive approach
Now see the variables on which the problem answer affects
These will be the dimensions of matrix
now implement for loop of the number of variables and implement same conditions as in recursive
just save values in matrix 
Thus you will get your ANSWER.
*/


// Recursion
// int knapsack(vector<pair<int,int>> wt,int n,int cap){
//     if(n==0 || cap==0)
//         return 0;
//     else if(wt[n-1].second>cap)
//         return knapsack(wt,n-1,cap);
//     else
//         return max(wt[n-1].first + knapsack(wt,n-1,cap-wt[n-1].second), knapsack(wt,n-1,cap));
// }

// DP
int knapsack(vector<pair<int,int>> wt,int n,int cap){
    int dp[n+1][cap+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=cap;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(wt[i-1].second>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(wt[i-1].first+dp[i-1][j-wt[i-1].second], dp[i-1][j]);
            }
        }
    }
    return dp[n][cap];
}

int main()
{
    int v;
    cout<<"Enter number of values:";
    cin>>v;
    vector<pair<int,int>> wt(v);
    for(int i=0;i<v;i++){
        int vl,w;
        cout<<"Enter "<<i+1<<" value-wt pair:";
        cin>>vl>>w;
        wt[i].first=vl;
        wt[i].second=w;
    }
    sort(wt.begin(),wt.end(),compare);
    int capacity;
    cout<<"Enter the capacity of sack:";
    cin>>capacity;
    int ans = knapsack(wt,v,capacity);
    cout<<"The total value of items that can be in sack is: "<<ans;
    return 0;
}