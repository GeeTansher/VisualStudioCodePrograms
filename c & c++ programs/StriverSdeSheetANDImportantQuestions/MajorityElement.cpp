// Boyer Moore Majority Algorithm
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int votes=0,candidate=-1;
        for(int i=0;i<n;i++){
            if(votes==0){
                candidate=nums[i];
                votes++;
            }
            else if(candidate==nums[i]){
                votes++;
            }
            else{
                votes--;
            }
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==candidate)
                count++;
        }
        
        if(count>n/2)
            return candidate;
        return -1;
    }