// Brute force

#include <bits/stdc++.h>
int Sum(vector<int> arr, int i, int j)
{
	int sum = 0;
	for (int k = i; k <= j; k++)
	{
		sum += arr[k];
	}
	return sum;
}
int LongestSubsetWithZeroSum(vector<int> arr)
{
	int n = arr.size();
	int len = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int sum = Sum(arr, i, j);
			if (sum == 0)
			{
				len = max(len, (j - i + 1));
			}
		}
	}
	return len;
}

// by sum array method

#include <bits/stdc++.h>
int LongestSubsetWithZeroSum(vector<int> arr)
{
	int n = arr.size();
	if (n == 0)
		return 0;
	int mlen = 0;
	vector<int> sum;
	sum.push_back(0);
	for (int i = 0; i < n; i++)
	{
		sum.push_back(arr[i] + sum[i]);
	}
	for (int i = 1; i < sum.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			int s = sum[i] - sum[j];
			if (s == 0)
			{
				int slen = i - j;
				mlen = max(mlen, slen);
			}
		}
	}
	return mlen;
}