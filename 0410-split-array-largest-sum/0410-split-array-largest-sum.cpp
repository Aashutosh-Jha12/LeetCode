class Solution {
    int countSubarrays(vector<int> arr, int maxsum){
    int subarrays=1, currentsum=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]+currentsum<=maxsum){
            currentsum+=arr[i];
        }
        else{
            subarrays++;
            currentsum=arr[i];
        }
    }
    return subarrays;
}

public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=INT_MIN,high=0;
        for(int i=0; i<n; i++){
            low=max(low,nums[i]);
            high+=nums[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(countSubarrays(nums,mid)<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};