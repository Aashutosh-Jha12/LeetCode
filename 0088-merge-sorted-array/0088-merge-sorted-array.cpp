class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // vector<int> temp;
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
        
    }
};