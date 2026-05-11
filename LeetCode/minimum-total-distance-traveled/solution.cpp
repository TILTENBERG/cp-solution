class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot,
                                   vector<vector<int>>& factory) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        vector<int> factoryind;
        for (auto& it : factory) {
            for (int i = 0; i < it[1]; ++i)
                factoryind.push_back(it[0]);
        }
        vector<vector<long long>> memo(robot.size(),
                                       vector<long long>(factoryind.size(), -1));
        return dp(robot, factoryind, 0, 0, memo);
    }
    long long dp(vector<int>& robot, vector<int>& factindexs, int robind,
                 int factind, vector<vector<long long>>& memo) {
        if (robind == robot.size())
            return 0;
        if (factind == factindexs.size())
            return 1e12;
        if (memo[robind][factind] != -1)
            return memo[robind][factind];
        long long dist = abs(robot[robind] - factindexs[factind]) +
                         dp(robot, factindexs, robind + 1, factind + 1, memo);
        long long skip = dp(robot, factindexs, robind, factind + 1,memo);
        return memo[robind][factind] = min(dist, skip);
    }
};