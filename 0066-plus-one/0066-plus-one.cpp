class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // digits[digits.size()-1]+=1;
        // if (digits[0]==10){
        //     digits.pop_back();
        //     digits.puch_back(1);
        //     digits.puch_back(0);
        //     return digits;
        // }
        // else{
        //     if (digits[digits.size()-1] > 9)
        // }

         for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
    }
};