int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0,element=-1;
        for(int i=0;i<n;i++){
            if(count==0){
                element=nums[i];
            }
            if(element==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        
        // to cross check the answer (not necessary)
        count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element)
                count++;
        }
        
        if(count>n/2)
            return element;
        return -1;
    }