// #include<bits/stdc++.h>
// using namespace std;
// #define mod 10000000007

// int main()
// {
//     long long int n;
//     cin>>n;
//     long long int res=1;
//     for(long long int i=0;i<n;i++)
//     {
//         res*=2;
//         res%=mod;
//     }
//     cout<<res;
//     return 0;
// }

// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)(1e9 + 7)

// Iterative Function to calculate (x^y)%p in O(log y)
ll power(ll x, ll y, ll p)
{
	ll res = 1; // Initialize result

	x = x % p; // Update x if it is more than or
	// equal to p

	while (y > 0) {

		// If y is odd, multiply x with result
		if (y & 1)
			res = (res * x) % p;

		// y must be even now
		y = y >> 1; // y = y/2
		x = (x * x) % p;
	}
	return res;
}

// Function to count the number of binary
// strings of length N having only 0's and 1's
ll findCount(ll N)
{
	int count = power(2, N, mod);
	return count;
}

// Driver code
int main()
{
	ll N;
    cin>>N;
	cout << findCount(N);

	return 0;
}
