class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {

        int row = mat.size();
        int col = mat[0].size();

        vector<vector<int>> presum(row + 1, vector<int>(col + 1));

        for (int i = 1; i <= row; ++i) {
            for (int j = 1; j <= col; ++j) {
                presum[i][j] = mat[i-1][j-1] + presum[i - 1][j] + presum[i][j - 1] - presum[i - 1][j - 1];
            }
        }
        int ans = 0;
        int sum = 0;

        int l = 1;
        int r = min(row, col);

        while (l <= r) {
            int mid = l + (r - l) / 2;
            bool find = false;

            for (int i = 1; i <= row - mid + 1; ++i) {
                for (int j = 1; j <= col - mid + 1; ++j) {
                    sum = presum[i + mid - 1][j + mid - 1] -
                          presum[i - 1][j + mid - 1] -
                          presum[i + mid - 1][j - 1] + presum[i - 1][j - 1];

                    // left top i,j
                    // right bot i+l-1 j+l-1

                    if (sum <= threshold) {
                        find = true;
                    }
                }
            }
            if (find) {
                ans = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }
        return ans;
    }
};