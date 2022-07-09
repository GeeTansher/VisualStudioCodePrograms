#include <bits/stdc++.h>
using namespace std;

// Recursive approach
// int longestCommonSequence(char *X, char *Y, int m, int n ){
//     if (m == 0 || n == 0)
//         return 0;
//     if (X[m-1] == Y[n-1])
//         return 1 + longestCommonSequence(X, Y, m-1, n-1);
//     else
//         return max(longestCommonSequence(X, Y, m, n-1), longestCommonSequence(X, Y, m-1, n));
// }

// int main(){
//     char X[] = "HCMWTIJ";
//     char Y[] = "MWSKJ";
//     int m = strlen(X);
//     int n = strlen(Y);
//     cout<<"Length of Longest Common Sequence is "<<longestCommonSequence( X, Y, m, n );
//     return 0;
// }

// DP approach
int longestCommonSubSequence(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    int dp[m + 1][n + 1];
    for (int i = 0; i < m + 1; ++i)
    {
        for (int j = 0; j < n + 1; ++j)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
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