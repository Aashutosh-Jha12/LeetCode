class Solution {
public:
    long long time(vector<int> temp,int mid){
        long long totalHr=0;
        for(int i=0; i<temp.size(); i++){
            totalHr+=ceil((double)temp[i]/mid);
        }
        return totalHr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1, high=INT_MIN;
        for(int i=0; i<n; i++){
            high=max(piles[i],high);
        }
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalHr=time(piles,mid);
            if(totalHr<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};