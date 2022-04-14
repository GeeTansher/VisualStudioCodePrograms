 // by hashmap
 vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> ans;
        int n=nums.size()/3;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto num:map){
            if(num.second>n){
                ans.push_back(num.first);
            }
        }
        return ans;
    }

// by boyer moore algo

vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,ele1=-1,ele2=-1;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(ele1==nums[i]){
                count1++;
            }
            else if(ele2==nums[i]){
                count2++;
            }
            else if(count1==0){
                ele1=nums[i];
                count1=1;
            }
            else if(count2==0){
                ele2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }   
        }
        count1=0;count2=0;
        for(auto num:nums){
            if(num==ele1){
                count1++;
            }
            else if(num==ele2){
                count2++;
            }
        }
        
        if(count1>n/3)
            ans.push_back(ele1);
        if(count2>n/3)
            ans.push_back(ele2);
        
        return ans;
    }