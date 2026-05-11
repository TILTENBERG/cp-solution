class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prev = 0;
        for (int i = 0; i < bank.size(); ++i) {
            string s = bank[i];
            int cnt = 0;
            for (char c : s) {
                if (c == '1') {
                    cnt++;
                }
            }
            if (cnt != 0) {
                ans += (prev * cnt);
                prev = cnt;
            }
        }
        return ans;
    }
};