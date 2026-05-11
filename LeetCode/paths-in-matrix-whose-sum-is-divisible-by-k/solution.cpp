const long long MOD = 1e9 + 7;
class Solution {
public:
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> old(m, vector<int>(k, 0));
        old[0][grid[0][0] % k]++;
        for (int i = 1; i < m; ++i) {
            for (int j = 0; j < k; ++j) {
                if (old[i - 1][j] != 0) {
                    old[i][(j + grid[0][i]) % k] += old[i - 1][j];
                }
            }
        }
        for (int i = 1; i < n; ++i) {
            vector<vector<int>> cur(m, vector<int>(k, 0));
            for (int j = 0; j < m; ++j) {
                if (j == 0) {
                    for (int p = 0; p < k; ++p) {
                        if (old[0][p] != 0) {
                            cur[0][(p + grid[i][j]) % k] =
                                (cur[0][(p + grid[i][j]) % k] + old[0][p]) %
                                MOD;
                        }
                    }
                } else {
                    for (int p = 0; p < k; ++p) {
                        if (old[j][p] != 0) {
                            cur[j][(p + grid[i][j]) % k] =
                                (cur[j][(p + grid[i][j]) % k] + old[j][p]) %
                                MOD;
                        }
                        if (cur[j - 1][p] != 0) {
                            cur[j][(p + grid[i][j]) % k] =
                                (cur[j][(p + grid[i][j]) % k] + cur[j - 1][p]) %
                                MOD;
                        }
                    }
                }
            }
            old = cur;
        }
        return old[m - 1][0];
    }
};