class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumEven=0;
        int i=0,j=0;
        while(i<n ){
            if( j%2==0){
                sumEven+=j;
                i++;
            }
            j++;
        }
        int k=0,l=0;
        while(k<n){
            if(l%2==1){
                sumOdd +=l;
                k++;
            }
            l++;
        }
        while(sumOdd>0 && sumEven>0){
            if(sumOdd>sumEven){
                sumOdd=sumOdd%sumEven;
            }
            else{
                sumEven=sumEven%sumOdd;
            }
        }
        return (sumOdd==0)? sumEven: sumOdd;
    }
};