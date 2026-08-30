class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size();
        int minIdx,maxIdx;
        for(int i=0; i<n; i++){
            if(nums[i]<mini){
                mini=nums[i];
                minIdx=i;
            }
            if(nums[i]>maxi){
                maxi=nums[i];
                maxIdx=i;
            }
        }
        int left=min(minIdx,maxIdx);
        int right=max(minIdx,maxIdx);
        int fromFront=right+1;
        int fromBack=n-left;
        int fromBoth=(left+1)+(n-right);
        return min({fromFront,fromBack,fromBoth});
    }
};