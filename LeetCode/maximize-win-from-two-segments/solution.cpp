class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
        int n = prizePositions.size();
        vector<int> dp(n + 1, 0);

        int ans = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {

            while (prizePositions[right] - prizePositions[left] > k) {
                left++;
            }

            int current_segment_count = right - left + 1;

            ans = max(ans, current_segment_count + dp[left]);

            dp[right + 1] = max(dp[right], current_segment_count);
        }

        return ans;
    }
};