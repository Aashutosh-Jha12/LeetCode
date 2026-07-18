class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn= INT_MAX;
        int mx= INT_MIN;
        int n=nums.size();
        if (n==2){
            return gcd(nums[0],nums[1]);
        }
        for ( int i = 0; i<n; i++){
            if ( nums[i]<mn){
                mn=nums[i];
            }
        }
        for ( int i = 0; i<n; i++){
            if ( nums[i]>mx){
                mx=nums[i];
            }
        }

        return gcd(mn,mx);
    }
};