class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 1; i < n; ++i) {
            string s;
            char target = ans[0];
            int cnt = 0;
            for (int k = 0; k < ans.size(); ++k) {
                if (ans[k] == target) {
                    cnt++;

                } else {
                    s += (to_string(cnt) + target);
                    target = ans[k];
                    cnt = 1;
                }
            }
            s += (to_string(cnt) + target);
            ans = s;
        }
        return ans;
    }
};