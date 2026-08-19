class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c(m+n);
        int i=0;
        int j=0;
        int k=0;
        while(i<m && j<n){
            if ( nums1[i]<nums2[j]){
                c[k]=nums1[i];
                i++;
            }
           else{
                    c[k]=nums2[j];
                    j++;
                }
                k++;
        }
            
        
        for(  ; i<m;i++){
            c[k]=nums1[i];
            k++;
        }
        for( ; j<n; j++){
            c[k]=nums2[j];
            k++;
        }

        for (int x=0 ; x<m+n; x++){
            nums1[x]=c[x];
        }
        
        // int left=n-1,right=0;
        // while(left>=0 && right < n){
        //     if(nums1[left]==0 ) continue;
        //     if(nums1[left]>nums2[right]){
        //         swap(nums1[left],nums2[right]);
        //     }
        //     else{ break; }
        //     sort(nums1.begin(),nums1.end());
        //     sort(nums2.begin(),nums2.end());
        //     for(int i=0; i<n; i++){
        //         nums1.push_back(nums2[i]);
        //     }
        // }
    }
};