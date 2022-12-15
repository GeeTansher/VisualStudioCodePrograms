int uniquePaths(int m, int n) {
    int total =m+n-2;
    int r=n-1;
    double ways=1;
    for(int i=1;i<=r;i++){
        ways=ways*(total-r+i)/i;
    }
    return (int)ways;
}
// dp solution
int ways(int i,int j,int m,int n,vector<vector<int>> &dp){
    if(i==(m-1)&&j==(n-1))  return 1;
    if(i>=m||j>=n)  return 0;
    
    if(dp[i][j]!=-1) return dp[i][j];
    else    return dp[i][j]=ways(i+1,j,m,n,dp) + ways(i,j+1,m,n,dp);
}
int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    int num=ways(0,0,m,n,dp);
    if(m==1&&n==1)  return num;
    return dp[0][0];
}
// somewhat tree but TLE is there
int ways(int i,int j,int m,int n){
    if(i==m-1&&j==n-1)  return 1;
    else if(i>m-1||j>n-1)    return 0;
    else
        return ways(i+1,j,m,n) + ways(i,j+1,m,n);
}
int uniquePaths(int m, int n) {
    return ways(0,0,m,n);
}