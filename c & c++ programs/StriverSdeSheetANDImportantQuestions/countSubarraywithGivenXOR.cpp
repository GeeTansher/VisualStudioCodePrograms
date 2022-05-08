// brute force

#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int ctr=0;
	int n=arr.size();
	for(int i=0;i<n;i++){
		int currxor = 0;
		for(int j=i;j<n;j++){
			currxor ^= arr[j];
			if(currxor==x)	{
				ctr++;
			}
		}
	}
	return ctr;
}

// by hashmap (watch video for better clarification)

#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    int ctr=0;
	unordered_map<int,int> mp;
	int xr=0;
	for(auto i:arr){
		xr=xr^i;
		if(xr==x)	ctr++;
		
		if(mp.find(xr^x)!=mp.end())	ctr+=mp[xr^x];
			
		mp[xr]+=1;
	}
	return ctr;
}

