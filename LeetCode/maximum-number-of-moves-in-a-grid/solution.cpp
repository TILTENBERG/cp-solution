class Solution {
    vector<vector<int>> memo;

    int dp(vector<vector<int>>& grid, int row, int col) {
        if (col == grid[0].size() - 1)
            return 0;

        if (memo[row][col] != -1)
            return memo[row][col];

        int maxMoves = 0;

        if (row > 0 && grid[row][col] < grid[row - 1][col + 1])
            maxMoves = max(maxMoves, 1 + dp(grid, row - 1, col + 1));

        if (grid[row][col] < grid[row][col + 1])
            maxMoves = max(maxMoves, 1 + dp(grid, row, col + 1));

        if (row < grid.size() - 1 && grid[row][col] < grid[row + 1][col + 1])
            maxMoves = max(maxMoves, 1 + dp(grid, row + 1, col + 1));

        return memo[row][col] = maxMoves;
    }

public:
    int maxMoves(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        memo.assign(rows, vector<int>(cols, -1));

        for (int i = 0; i < rows; ++i) {
            ans = max(ans, dp(grid, i, 0));
        }

        return ans;
    }
};