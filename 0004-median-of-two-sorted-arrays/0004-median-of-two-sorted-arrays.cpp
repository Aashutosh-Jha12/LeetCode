class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0;
        vector<int> temp;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        for( ;i<m; i++){
            temp.push_back(nums1[i]);
        }
        for( ;j<n; j++){
            temp.push_back(nums2[j]);
        }
        if((m+n)%2==0){
            int x= temp[(m+n)/2];
            int y= temp[(m+n)/2 -1 ];
            return (double)(x+y)/2;
        }
        return temp[(m+n)/2];
    }
};