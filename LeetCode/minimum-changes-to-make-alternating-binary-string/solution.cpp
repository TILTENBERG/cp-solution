class Solution {
public:
    int minOperations(string s) {
        int ans = 0;
        int size = s.size();
        // 01010101
        for (int i = 0; i < size; ++i) {
            // 0101010
            if (!(i & 1) && s[i] == '1') {
                ans++;
            }
            if (i & 1 && s[i] == '0')
                ans++;
        }
        int ans1 = 0;
        for (int i = 0; i < size; ++i) {
            // 10101010
            if (!(i & 1) && s[i] == '0') {
                ans1++;
            }
            if (i & 1 && s[i] == '1')
                ans1++;
        }
        // ans = min(ans, ans1);
        //cout << ans << ' ' << ans1;
        ans = min(ans, ans1);
        return ans;
    }
};