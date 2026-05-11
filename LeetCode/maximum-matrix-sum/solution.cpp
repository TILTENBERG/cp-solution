class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int mn = INT_MAX;
        int cnt = 0;
        for (auto& row : matrix) {
            for (int col : row) {
                sum += abs(col);
                if (col < 0)
                    cnt++;
                mn = min(mn, abs(col));
            }
        }
        return cnt % 2 == 0 ? sum : sum - 2LL * mn;
    }
};