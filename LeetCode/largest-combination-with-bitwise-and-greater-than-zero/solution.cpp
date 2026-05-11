class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int ans = 0;
        int end = 0;
        for (int j = 0; j < 24; ++j) {
            int cnt = 0;
            for (int i = 0; i < candidates.size(); ++i) {
                if (candidates[i] & 1)
                    cnt++;
                candidates[i] >>= 1;
                if (candidates[i] == 0)
                    end++;
            }
            ans = max(ans, cnt);
            if (end == candidates.size())
                break;
        }

        return ans;
    }
};