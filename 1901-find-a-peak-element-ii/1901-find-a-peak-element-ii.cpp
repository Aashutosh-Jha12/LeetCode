class Solution {
    int maxi(vector<vector<int>> arr, int col,int m){
        int peak=INT_MIN;
        int row=0;
        for(int i=0; i<m; i++){
            if(arr[i][col]>peak){
                peak=arr[i][col];
                row=i;
            }
        }
        return row;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row=maxi(mat,mid,n);
            int crnt_value=mat[row][mid];
            int left=mid>0?mat[row][mid-1]:-1;
            int right=mid<m-1?mat[row][mid+1]:-1;
            if(crnt_value > left && crnt_value > right){
                return {row,mid};
            }
            else if(crnt_value < left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {};
    }
};