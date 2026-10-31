
class Solution {
public:
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        const int MOD = 1e9 + 7;

        vector<vector<int>> R(m, vector<int>(n, -1));
        vector<vector<int>> D(m, vector<int>(n, -1));

        // Precompute mirror transitions
        for (int s = m + n - 2; s >= 0; s--) {
            for (int i = max(0, s - n + 1);
                 i <= min(m - 1, s); i++) {

                int j = s - i;

                if (grid[i][j] == 0) {
                    R[i][j] = i * n + j;
                    D[i][j] = i * n + j;
                }
                else {
                    if (i + 1 < m)
                        R[i][j] = D[i + 1][j];

                    if (j + 1 < n)
                        D[i][j] = R[i][j + 1];
                }
            }
        }

        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 1;

        // Count paths
        for (int s = 0; s <= m + n - 2; s++) {
            for (int i = max(0, s - n + 1);
                 i <= min(m - 1, s); i++) {

                int j = s - i;

                if (dp[i][j] == 0) continue;

                long long ways = dp[i][j];

                // Move right
                if (j + 1 < n) {
                    int pos = R[i][j + 1];

                    if (pos != -1) {
                        int x = pos / n;
                        int y = pos % n;

                        dp[x][y] = (dp[x][y] + ways) % MOD;
                    }
                }

                // Move down
                if (i + 1 < m) {
                    int pos = D[i + 1][j];

                    if (pos != -1) {
                        int x = pos / n;
                        int y = pos % n;

                        dp[x][y] = (dp[x][y] + ways) % MOD;
                    }
                }
            }
        }

        return dp[m - 1][n - 1];
    }
};
