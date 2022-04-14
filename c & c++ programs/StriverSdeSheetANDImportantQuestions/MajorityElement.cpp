// by boyer moore algo
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

// by divide and conquer (time limit can be a issue)

int countInRange(vector<int> nums, int num, int lo, int hi) {
        int count = 0;
        for (int i = lo; i <= hi; i++) {
            if (nums[i] == num) {
                count++;
            }
        }
        return count;
    }

int majorityElementRec(vector<int> nums, int lo, int hi) {
    // base case; the only element in an array of size 1 is the majority
    // element.
    if (lo == hi) {
        return nums[lo];
    }

    // recurse on left and right halves of this slice.
    int mid = (hi-lo)/2 + lo;
    int left = majorityElementRec(nums, lo, mid);
    int right = majorityElementRec(nums, mid+1, hi);

    // if the two halves agree on the majority element, return it.
    if (left == right) {
        return left;
    }

    // otherwise, count each element and return the "winner".
    int leftCount = countInRange(nums, left, lo, hi);
    int rightCount = countInRange(nums, right, lo, hi);

    return leftCount > rightCount ? left : right;
}

int majorityElement(vector<int> &nums) {
    return majorityElementRec(nums, 0, nums.size()-1);
}