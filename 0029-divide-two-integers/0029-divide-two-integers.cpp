class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a = dividend;
        long long b = divisor;

        // Save sign before making numbers positive
        bool negative = (a < 0) ^ (b < 0);

        a = abs(a);
        b = abs(b);

        long long count = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            // Find the biggest multiple of b <= a
            while (a >= temp + temp) {
                temp += temp;
                multiple += multiple;
            }

            a -= temp;
            count += multiple;
        }

        if (negative)
            count = -count;

        // Overflow case
        if (count > INT_MAX)
            return INT_MAX;

        return (int)count;
    }
};