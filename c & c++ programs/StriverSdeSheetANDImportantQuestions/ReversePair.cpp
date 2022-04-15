int merge(vector<int> &nums,int low,int mid,int high){
    int ctr=0;
    int j=mid+1;
    for(int i=low;i<=mid;i++){
        while(j<=high && nums[i]>(long)2*nums[j]){
            j++;
        }
        ctr+=(j-(mid+1));
    }
    vector<int> temp;
    int l=low,r=mid+1;
    while(l<=mid&&r<=high){
        if(nums[l]<=nums[r]){
            temp.push_back(nums[l++]);
        }
        else{
            temp.push_back(nums[r++]);
        }
    }
    while(l<=mid){
        temp.push_back(nums[l++]);
    }
    while(r<=high){
        temp.push_back(nums[r++]);
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
    return ctr;
}
int mergeSort(vector<int> &nums,int low,int high){
    // int ctr=0;
    if(low>=high) return 0;
    int mid=(low+high)/2;
    int ctr=mergeSort(nums,low,mid);
    ctr+=mergeSort(nums,mid+1,high);
    ctr+=merge(nums,low,mid,high);
    // }
    return ctr;
}
int reversePairs(vector<int>& nums) {
    return mergeSort(nums,0,nums.size()-1);
}