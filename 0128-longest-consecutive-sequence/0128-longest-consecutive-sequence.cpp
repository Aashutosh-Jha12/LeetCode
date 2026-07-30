class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=1;
        int count=1;
        sort(nums.begin(),nums.end());
       // if(nums.empty()) return 0;
        if(n==0) return 0;
        int el=nums[0];
        for( int i = 1; i < n ; i++){
            if( nums[i]==el){
                continue;
            }
            else if(nums[i]-1==el){
                count++;
                el++;
            }
            else if( nums[i]-1 != el){
                el=nums[i];
                count = 1;
            }
            longest=max(longest,count);
        }
        return longest;
    }
};