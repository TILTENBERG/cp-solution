class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        vector<bool> vct;
        for (int i = 0; i < size; ++i) {
            ans = ((ans << 1) + nums[i]) % 5;
            cout << ans << " ";
            vct.push_back(ans == 0);
        }
        return vct;
    }
};