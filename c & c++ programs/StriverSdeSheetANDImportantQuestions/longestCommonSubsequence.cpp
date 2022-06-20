#include<bits/stdc++.h>
using namespace std;

int longestcommonsequence(char *X, char *Y, int m, int n ){
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + longestcommonsequence(X, Y, m-1, n-1);
    else
        return max(longestcommonsequence(X, Y, m, n-1), longestcommonsequence(X, Y, m-1, n));
}

int main(){
    char X[] = "HCMWTIJ";
    char Y[] = "MWSKJ";
    int m = strlen(X);
    int n = strlen(Y);
    cout<<"Length of Longest Common Sequence is "<<longestcommonsequence( X, Y, m, n );
    return 0;
}
