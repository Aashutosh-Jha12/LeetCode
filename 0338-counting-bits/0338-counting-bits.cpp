class Solution {
    int count(int n){
        vector<int> temp;
           while(n>0){
            int x=n%2;
            temp.push_back(x);
            n=n/2;
        }
        int count=0;
        for(int i=0; i<temp.size(); i++){
            if(temp[i]==1){
                count++;
            }
        }
        return count;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            int temp=count(i);
            ans.push_back(temp);
        }
        return ans;
    }
};