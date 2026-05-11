class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> dp(size, INT_MIN);
        dp[0] = 0;
        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                if (-target <= nums[j] - nums[i] &&
                    nums[j] - nums[i] <= target) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
                //cout << "i = " << i << " j = " << j << " dp[" << j
                    // << "] = " << dp[j] << "\n";
            }
        }

        return dp.back() <= 0 ? -1 : dp.back();
    }
};