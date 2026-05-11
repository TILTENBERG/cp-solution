class Solution {
public:
    int binaryGap(int n) {
        n >>= __builtin_ctz(n);
        int ans = 0;
        while (n > 0) {
            n >>= 1;
            if (n == 0)
                break;
            int zeros = __builtin_ctz(n);
            ans = max(ans, zeros + 1);
            n >>= zeros;
        }
        return ans;
    }
};