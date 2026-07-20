class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        int total = rows * cols;

        k %= total;

        vector<vector<int>> ans(rows, vector<int>(cols));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                // Convert (i, j) to 1D index
                int index = i * cols + j;

                // Find new index after shifting
                int newIndex = (index + k) % total;

                // Convert back to 2D coordinates
                int newRow = newIndex / cols;
                int newCol = newIndex % cols;

                ans[newRow][newCol] = grid[i][j];
            }
        }

        return ans;
    }
};