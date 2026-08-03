class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<int> temp;
        long long ans=1;
        temp.push_back(ans);
        for( int i=1; i<n; i++){
            ans=ans*(n-i);
            ans=ans/i;
            temp.push_back(ans);
        }
        return temp;
    }
};