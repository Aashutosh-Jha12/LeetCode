class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n= arr.size();
        vector<int> temp;
        if (n==1){
            temp.push_back(-1);
            return temp;
        }
        for(int i=1;i<n;i++){
            int maxi=arr[i];
            for(int j=i+1;j<n;j++){
                maxi=max(maxi,arr[j]);
            }
            temp.push_back(maxi);
        }
        temp.push_back(-1);
        return temp;
    }
};