class Solution {
    long long Threshold(vector<int> arr, int day){
        long long sum=0;
        for(int i=0; i<arr.size(); i++){
            sum += ceil((double)arr[i]/day);
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1,high=INT_MIN;
        for(int i=0; i<n; i++){
            high=max(nums[i],high);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            long long ans=Threshold(nums,mid);
            if(ans<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};