class Solution {
public:
    int maxProduct(int n) {
        long long firstLargest=INT_MIN;
        long long secondLargest=INT_MIN;
        while(n>0){
            int digit=n%10;
            if(digit>=firstLargest){
                secondLargest=firstLargest;
                firstLargest=digit;
            }
            else if(digit<firstLargest && digit>secondLargest){
                secondLargest=digit;
            }
            n=n/10;
        }
        return firstLargest*secondLargest;
    }
};