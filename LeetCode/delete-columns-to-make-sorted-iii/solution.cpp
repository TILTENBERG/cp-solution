class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size(); 
        int m = strs[0].size(); 

        // dp[i] stores the length of the longest non-decreasing subsequence
        // of columns that ends specifically at index i.
        vector<int> dp(m, 1);
        int max_kept = 1;

        for (int i = 0; i < m; ++i) {     // Current column 'i'
            for (int j = 0; j < i; ++j) { // Previous column 'j'

                // Check if column 'i' can validly follow column 'j'
                // It must be non-decreasing in ALL rows
                bool possible = true;
                for (int k = 0; k < n; ++k) {
                    if (strs[k][j] > strs[k][i]) {
                        possible = false;
                        break;
                    }
                }

                // If valid, we can extend the sequence ending at j
                if (possible) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            max_kept = max(max_kept, dp[i]);
        }

        // The answer is total columns minus the maximum we can keep
        return m - max_kept;
    }
};