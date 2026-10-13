class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;

        for (int x : nums) {
            squares.push_back(1LL * x * x);
        }

        sort(squares.begin(), squares.end());

        long long ans = 0;
        int n = squares.size();
        int negative = n / 2;

        for (int i = 0; i < n; i++) {
            if (i < negative) {
                ans -= squares[i];
            } else {
                ans += squares[i];
            }
        }

        return ans;
    }
};