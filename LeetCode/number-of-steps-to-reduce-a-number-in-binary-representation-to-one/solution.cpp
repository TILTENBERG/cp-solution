class Solution {
public:
    int numSteps(string s) {
        int ans = 0;
        while (s != "1") {
            if (s.back() == '0') {
                s.erase(s.end() - 1);

            } else {
                int parity = 1;
                for (int i = s.size() - 1; i >= 0; --i) {
                    char c = s[i];
                    s[i] = s[i] ^ parity;
                    parity = c & parity;
                    if (parity == 0)
                        break;
                }
                if (parity == 1) {
                    s = '1' + s;
                }
               // cout << s << '\n';
            }
            ans++;
        }
        return ans;
    }
};