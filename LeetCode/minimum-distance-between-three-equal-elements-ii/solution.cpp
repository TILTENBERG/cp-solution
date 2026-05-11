class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<vector<int>> vct(100001);
        int ans = INT_MAX;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            vct[nums[i]].push_back(i);
        }
        for (int i = 0; i < 100001; ++i) {
            if (vct[i].size() > 2) {
                for (int j = 0; j < vct[i].size() - 2; ++j) {
                    ans = min(ans, abs(vct[i][j] - vct[i][j + 1]) +
                                       abs(vct[i][j + 1] - vct[i][j + 2]) +
                                       abs(vct[i][j + 2] - vct[i][j]));
                    //cout << i << " " << vct[i][j + 1] << '\n';
                }
            }
        }

        return ans != INT_MAX ? ans : -1;
    }
};