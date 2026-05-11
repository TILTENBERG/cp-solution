class Solution {
public:
    int m, n;
    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void dfs(vector<vector<int>>& h, int i, int j,
             vector<vector<bool>>& visit) {
        visit[i][j] = true;
        for (auto& d : dir) {
            int x = i + d[0];
            int y = j + d[1];
            if (x >= 0 && y >= 0 && x < m && y < n && !visit[x][y] &&
                h[x][y] >= h[i][j]) {
                dfs(h, x, y, visit);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size(), n = heights[0].size();
        vector<vector<bool>> pac(m, vector<bool>(n, 0)),
            atl(m, vector<bool>(n, 0));
        for (int i = 0; i < m; ++i) {
            dfs(heights, i, 0, pac);
            dfs(heights, i, n - 1, atl);
        }
        for (int i = 0; i < n; ++i) {
            dfs(heights, 0, i, pac);
            dfs(heights, m - 1, i, atl);
        }
        vector<vector<int>> ans;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (pac[i][j] && atl[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
};