class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;

        // 1 10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110 1111 10000
        // 10001 10010 10011 10100 10101 1  2  3   4  5  6   7     8   9   10 11
        // 12  13    14   15   16   17       18   19  20     21
        // 1 1 6 110 27 11011 220 11011100

        long long ans = 0;
        for (int i = 1; i <= n; ++i) {
            int flr = floor(log2(i)) + 1;
            ans = (ans << flr) % MOD;
            ans = (ans + i) % MOD;
        }
        return ans;
    }
};