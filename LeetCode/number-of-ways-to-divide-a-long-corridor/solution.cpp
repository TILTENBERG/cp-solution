
class Solution {
public:
    const int MOD = 1000000007;
    int numberOfWays(string corridor) {
        int size = corridor.size();
        int cnt = 0;
        int prev = 0;
        long long ans=0;
        for (int i = 0; i < size; ++i) {
            if (corridor[i] == 'S')
                cnt++;
            else
                prev++;
        }
        if (cnt % 2 == 1 || cnt == 0)
            return 0;
        else if (prev == 0)
            return 1;
        else {
            cnt = 0;
            prev = 0;
            ans = 1;
            for (int i = 0; i < size; ++i) {
                if (corridor[i] == 'S') {
                    if (cnt == 2) {
                        //cout << prev << '\n';
                        ans = (ans * prev) % MOD;
                        prev = 0;
                        cnt = 1;
                    } else
                        cnt++;
                }
                if (cnt == 2)
                    prev++;
            }
        }
        return ans;
    }
};