const int MOD = 1e9 + 7;
class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, int> mp;
        int size = points.size();
        long long ans = 0, sum = 0;

        for (vector<int>& vct : points) {
            mp[vct[1]]++;
        }
        int top;
        for (auto& [_, num] : mp) {
            long long cnt = (long long)num * (num - 1) / 2;
            ans += cnt * sum;
            sum += cnt;
        }
        return ans % MOD;
    }
};