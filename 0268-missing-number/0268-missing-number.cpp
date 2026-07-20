class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //can be also solveed using sum meathod
        // int n=nums.size();
        // int sum=n*(n+1)/2;
        // int sum2=0;

        // for ( int i=0; i<n;i++){
        //     sum2+=nums[i];
        // }
        // return sum-sum2;


        int xor1=0;
        int xor2=0;
        for ( int i=0; i<nums.size(); i++){
            xor2=xor2^nums[i];
            xor1=xor1^ (i+1);
        }
        return xor1^xor2;
        
        
    }
};