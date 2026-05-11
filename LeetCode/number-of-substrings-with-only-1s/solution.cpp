class Solution {
public:
    int numSub(string s) {
        int ans = 0;
        int start = 0;
        const int mod = 1e9+7;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i - 1] == '0' && s[i] == '1')
                start = i;
            if (s[i] == '0' && s[i - 1] == '1') {
                int cnt = i - start;
                ans += ((long long)cnt * (cnt + 1) / 2)%mod;
            }
        }
        if (s.back() == '1') {
            int cnt = s.size() - start;
            ans += cnt * (cnt + 1) / 2;
        }

        return ans;
    }
};