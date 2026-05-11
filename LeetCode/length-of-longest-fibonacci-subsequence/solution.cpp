class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int size = arr.size();
        vector<vector<int>> dp(size, vector<int>(size));
        int ans = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < size; ++i) {
            mp[arr[i]] = i;
            for (int j = 0; j < i; ++j) {
                int target = (mp.find(arr[i] - arr[j]) == mp.end())
                                 ? -1
                                 : mp[arr[i] - arr[j]];
                dp[j][i] = (arr[i] - arr[j] < arr[j] && target >= 0)
                               ? dp[target][j] + 1
                               : 2;
                ans = max(ans, dp[j][i]);
            }
        }
        return ans > 2 ? ans : 0;
    }
};