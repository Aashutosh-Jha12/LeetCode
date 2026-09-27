class Solution {
    long long countDays(vector<int> arr, int capacity){
        int days=1,load=0;
        for(int i=0; i<arr.size(); i++){
            if(load+arr[i]>capacity){
                days++;
                load=arr[i];
            }
            else {
                load +=arr[i];
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=INT_MIN;
        int high=0;
        for(int i=0; i<n; i++){
            low=max(low,weights[i]);
            high += weights[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            long long ans=countDays(weights,mid);
            if(ans<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};