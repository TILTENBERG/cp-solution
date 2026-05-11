class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        vector<bool> dp(s.size() + 1, 0);
        dp[0] = 1;
        for (int i = 0; i <= s.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && st.count(s.substr(j, i - j))) {
                    dp[i] = 1;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};