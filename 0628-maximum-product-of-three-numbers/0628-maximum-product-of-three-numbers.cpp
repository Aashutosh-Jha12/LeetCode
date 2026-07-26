class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long long firstLargest = INT_MIN;
        long long secondLargest = INT_MIN;
        long long thirdLargest = INT_MIN;
        long long minimum1=INT_MAX;
        long long minimum2=INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= firstLargest) {
                thirdLargest = secondLargest;
                secondLargest = firstLargest;
                firstLargest = nums[i];
            }
            else if (nums[i] >= secondLargest) {
                thirdLargest = secondLargest;
                secondLargest = nums[i];
            }
            else if (nums[i] >= thirdLargest) {
                thirdLargest = nums[i];
            }
            if (nums[i]<minimum1){
                minimum2=minimum1;
                minimum1=nums[i];
            }
            else if(nums[i]<minimum2){
                minimum2=nums[i];
            }
        }
        long long ans1= firstLargest * secondLargest * thirdLargest;
        long long ans2= firstLargest * minimum1 * minimum2;

        return max(ans1,ans2);
    }
};