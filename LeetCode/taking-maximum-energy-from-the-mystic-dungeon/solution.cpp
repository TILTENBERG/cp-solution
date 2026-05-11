class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<vector<int>> dp(n, vector<int>(2, INT_MIN));

        dp[n - 1][0] = dp[n - 1][1] = energy[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            dp[i][0] = max(dp[i][0], dp[i + 1][0]);
            if (i + k < n) {
                dp[i][0] = max(dp[i][0], dp[i + k][1] + energy[i]);
                dp[i][1] = energy[i] + dp[i + k][1];
            } else {
                dp[i][0] = max(dp[i][0], energy[i]);
                dp[i][1] = max(dp[i][1], energy[i]);
            }
        }

        return dp[0][0];
    }
};