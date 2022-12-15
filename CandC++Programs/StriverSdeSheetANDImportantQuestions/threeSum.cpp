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

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        if(nums.size()<3)
            return ans;
        
        sort(nums.begin(),nums.end());
        
        if(nums[0]>0)       // if first number is >0 then array can not make 0 at all.
            return ans;
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]>0)
                break;
            
            for(int j=i+1;j<n-1;j++){
                int k=-1*(nums[i]+nums[j]);
                
                if(mp.count(k)&&mp.find(k)->second>j){
                    ans.push_back({nums[i],nums[j],k});
                }
                j=mp.find(nums[j])->second;
            }
            i=mp.find(nums[i])->second;
        }
        return ans;
    }