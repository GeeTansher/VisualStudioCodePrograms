// floyd's Algorithm
int findDuplicate(vector<int>& nums) {
        int tortoise=nums[0];
        int hare=nums[0];
        do{
            tortoise=nums[tortoise];
            hare=nums[nums[hare]];
        }while(tortoise!=hare);
        
        tortoise=nums[0];
        while(tortoise!=hare){
            tortoise=nums[tortoise];
            hare=nums[hare];
        }    
        return hare;
    }
// negative method
int findDuplicate(vector<int>& nums) {
        int curr;
        for(int i=0;i<nums.size();i++){
            curr=abs(nums[i]);
            if(nums[curr]<0){
                return curr;
            }
            nums[curr]*=-1;
        }
        return -1;
    }
// set method
int findDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for(auto i:nums){
            if(uset.find(i)!=uset.end())
                return i;
            else
                uset.insert(i);
        }
        return -1;
    }
// sort and search
int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
