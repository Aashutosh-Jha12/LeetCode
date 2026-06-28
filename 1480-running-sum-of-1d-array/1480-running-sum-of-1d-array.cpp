class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> s;
        int n = nums.size();
        int sum= 0;
        for ( int i = 0 ; i < n ; i++ ){
            sum += nums[i];
            s.push_back(sum);
        }
        return s;
    }
};