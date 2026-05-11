class Solution {
public:
    int numberOfWays(int n, int x) {

        const int MOD = 1e9 + 7;

        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        vector<long long> powers;
        for (long long i = 1;; i++) {
            long long val = 1;
            for (int j = 0; j < x; j++) {
                val *= i;
                if (val > n)
                    break;
            }
            if (val > n)
                break;
            powers.push_back(val);
        }

        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (auto val : powers) {
            for (int s = n; s >= val; s--) {
                dp[s] = (dp[s] + dp[s - val]) % MOD;
            }
        }

        return dp[n] % MOD;
    }
};