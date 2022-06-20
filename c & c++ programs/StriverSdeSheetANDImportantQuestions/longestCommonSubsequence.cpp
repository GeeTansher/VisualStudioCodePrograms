#include <bits/stdc++.h>
using namespace std;

// Recursive approach
// int longestcommonsequence(char *X, char *Y, int m, int n ){
//     if (m == 0 || n == 0)
//         return 0;
//     if (X[m-1] == Y[n-1])
//         return 1 + longestcommonsequence(X, Y, m-1, n-1);
//     else
//         return max(longestcommonsequence(X, Y, m, n-1), longestcommonsequence(X, Y, m-1, n));
// }

// int main(){
//     char X[] = "HCMWTIJ";
//     char Y[] = "MWSKJ";
//     int m = strlen(X);
//     int n = strlen(Y);
//     cout<<"Length of Longest Common Sequence is "<<longestcommonsequence( X, Y, m, n );
//     return 0;
// }

// DP approach
int longestCommonSubSequence(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    int dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; ++i)
    {
        for (int j = 0; j < m + 1; ++j)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (s1[j - 1] == s2[i - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string s1, s2;
    cout << "Enter strings:";
    getline(cin, s1);
    getline(cin, s2);
    cout << "Length of Longest Common Sequence is " << longestCommonSubSequence(s1, s2);
    return 0;
}