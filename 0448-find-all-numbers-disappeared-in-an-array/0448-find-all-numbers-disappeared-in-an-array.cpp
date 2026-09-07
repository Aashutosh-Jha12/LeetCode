class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int j=1;
        for(int i=0;i<nums.size(); i++){
            
            if(nums[i]==j){
                 j++;
            }
            else if(nums[i]>j){
                ans.push_back(j);
                j++;
                i--;
            }
        }
        while(j<=nums.size()){
            ans.push_back(j);
            j++;
        }
        return ans;
    }
};