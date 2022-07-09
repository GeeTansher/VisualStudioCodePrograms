#include<bits/stdc++.h>

using namespace std;

// bool subSum(int ar[],int n,int target){
//     if(n==0)    return false;
//     if(target==0)    return true;
//     if(ar[n-1]>target){
//         return subSum(ar,n-1,target);
//     }
//     return (subSum(ar,n-1,target) || subSum(ar,n-1,target-ar[n-1]));
// }

bool subSum(int ar[],int n,int target){
    bool dp[n+1][target+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(i==0){
                dp[i][j]=false;
            }
            if(j==0){
                dp[i][j]=true;
            }
            if(ar[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=(dp[i-1][j] || dp[i-1][j-ar[i-1]]);
            }
        }
    }
    return dp[n][target];
}
int main()
{
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int ar[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int target;
    cout<<"Enter target";
    cin>>target;
    if(subSum(ar,n,target)){
        cout<<"Possible";
    }
    else
    {
        cout<<"Not possible";
    }
    return 0;
}