class Solution {
    int possible(vector<int> arr, int day,int m, int k){
        int count=0,noOfBloom=0;
        for(int i=0; i<arr.size();i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                noOfBloom += (count/k);
                count=0;
            }
        }
        noOfBloom += (count/k);
        return noOfBloom;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n) return -1;
        int low=INT_MAX,high=INT_MIN;
        for(int i=0; i<n; i++){
            low=min(low,bloomDay[i]);
            high=max(high,bloomDay[i]);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int ans=possible(bloomDay,mid,m,k);
            if(ans>=m){
                high=mid-1;
            }
            else if(ans<m){
                low=mid+1;
            }
        }
        return low;
    }
};