class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // nums.erase(unique(nums.begin(),nums.end()),nums.end());
        // if(nums.size()<3) return nums[nums.size()-1];
        // return nums[nums.size()-3];

        long first=  LONG_MIN;
        long second=    LONG_MIN;
        long third= LONG_MIN;

        for( int x : nums){
            if ( x== first || x==second || x==third){
                continue;
            }
            else if (x > first){
              third=second;
              second=first;
              first=x;
            }
            else if( x > second){
                third=second;
                second=x;
            }
            else if(x > third){
                third=x;
            }
        }
        return ( third == LONG_MIN)? first : third;
    }
};