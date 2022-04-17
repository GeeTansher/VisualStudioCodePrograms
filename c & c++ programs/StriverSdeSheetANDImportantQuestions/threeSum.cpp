vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n=nums.size();
    if(n<3) return ans;
    sort(nums.begin(),nums.end());
    if(nums[0]>0)   return ans;
    
    for(int i=0;i<n-2;i++){
        if(i>0&&nums[i]==nums[i-1]) continue;
        
        int j=i+1,k=n-1;
        while(j<k){
            if(nums[i]+nums[j]+nums[k]==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                int val1=nums[j];
                while(j<k&&nums[j]==val1)   j++;
                
                val1=nums[k];
                while(j<k&&nums[k]==val1)   k--;
                
            }
            else if(nums[i]+nums[j]+nums[k]>0)  k--;
            
            else    j++;
            
        }
    }
    return ans;
}

// by hashmap
