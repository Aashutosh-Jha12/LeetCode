class Solution {
    int root(int n){
        while(n>0 && n%2==0){
                n=n/2;
        }
        return n;
    }
public:
    bool isPowerOfTwo(int n) {
        int res=root(n);
        return res==1;
    }
};