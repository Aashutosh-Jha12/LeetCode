class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int sum=0;
        int prod=1;
        while(n>0){
            int digit=n%10;
            sum += digit;
            prod *= digit;
            n = n/10;
        }
        int res= sum+prod;
        if (original%res==0) return true;
        return false;
    }
};