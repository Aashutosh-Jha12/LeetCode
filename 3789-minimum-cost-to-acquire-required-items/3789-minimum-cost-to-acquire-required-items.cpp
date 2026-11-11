
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        long long mini = min(need1, need2);
        long long maxi = max(need1, need2);

        long long ans1 = maxi * costBoth;

        long long ans2 = mini * costBoth 
                       + (need1 - mini) * cost1
                       + (need2 - mini) * cost2;

        long long ans3 = (long long)need1 * cost1 
                       + (long long)need2 * cost2;

        return min({ans1, ans2, ans3});
    }
};
